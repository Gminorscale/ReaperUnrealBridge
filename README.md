# ReaperUnrealBridge

Reaper ↔ Unreal Engine bridge: capture Reaper audio in-engine and control Reaper via OSC.

## How It Works

When a weapon (or any actor) fires in Unreal, the plugin tells Reaper to play a sound via OSC, then captures that audio back from Reaper through a virtual audio cable and spatializes it in-engine — inheriting SoundClass, Attenuation, and spatialization from the original Unreal sound. You get Reaper's audio quality and processing pipeline while keeping Unreal's 3D spatial audio.

## Features

- **Audio Capture from Reaper** — Route Reaper's output through a virtual audio device (e.g. VB-Cable, BlackHole, JACK) and capture it in Unreal via an AudioCaptureComponent. The captured audio is spatialized and mixed like any other in-game sound.
- **Copy Settings from Existing Sound / Sound Asset** — Copy SoundClass and Attenuation from a reference sound (UAudioComponent or USoundBase) onto the AudioCapture component. Works with SoundCue, SoundWave, MetaSound, etc.
- **OSC Control (Unreal → Reaper)** — Send OSC messages over UDP to trigger Reaper actions (play, stop, record, go to marker, etc.) directly from Blueprints. Uses a built-in raw UDP sender — no dependency on the OSC plugin for sending.
- **Custom Editor Nodes** — "Get Reaper Action" and "Get OSC Command" nodes with searchable dropdowns backed by DataTables. Values are baked at compile time for zero-cost runtime lookups.
- **Debug Logging** — "Debug Log Audio Settings" prints the current SoundClass, Attenuation, and spatialization state of a component to the Output Log and on-screen.
- **No Project Settings Required** — Enable the plugin and go. No custom Game Instance, no editor preferences to configure.

## Requirements

- **Unreal Engine 5.5+** (tested on 5.5, 5.6, and 5.7)
- **Plugins** (enabled automatically when this plugin is enabled):
  - **AudioCapture** — Engine plugin for microphone/virtual-device capture
  - **OSC** — Engine plugin for Open Sound Control protocol
- **Reaper** (or any DAW that accepts OSC) running on the same machine or network
- **Virtual audio device** (e.g. VB-Audio Virtual Cable) to route Reaper's output back to Unreal

## Installation

1. Copy the `ReaperUnrealBridge` folder into your project's `Plugins/` directory.
2. **Delete** any `Intermediate/` and `Binaries/` folders inside the copied plugin (these are project-specific build artifacts and must be regenerated).
3. Open or restart the Unreal Editor. The plugin will be detected and built automatically.
4. Verify the plugin is enabled: Edit → Plugins → search "ReaperUnrealBridge".

## Architecture

The plugin uses a three-layer architecture:

### BP_AudioCapture_Comp (Blueprint Component — the orchestrator)

Lives on weapons or other actors. Contains all the high-level logic:

- **ActivateAudioFromReaper** — Destroys any existing audio actor, spawns a new `BP_AudioFromReaper`, attaches it to the owner, and starts the audio capture stream.
- **SpawnActor / AttachActorToActor** — Spawns and attaches the audio actor to the component's owner.
- **StartStream / StopStream** — Controls the AudioCaptureComponent on the spawned actor.
- **OSC functions** (SendOSC_TriggerAction, SendOSC_PlayFromEditCursor, SendOSC_Stop, OSC_Send) — Build OSC addresses using Get Reaper Action and send them to Reaper.
- **CopySettingsFromExistingSound / CopySettingsFromSoundAsset / ApplyCopiedSoundSettings / SetSoundSettings** — Manage copying SoundClass/Attenuation from reference sounds to the audio capture.

### BP_AudioFromReaper (Blueprint Actor — the audio source)

Spawned at runtime by BP_AudioCapture_Comp. Contains:

- **AudioCaptureInBP** — A standard engine `AudioCaptureComponent` that captures audio from the virtual audio cable (Reaper's output).
- **Sphere** — Visual representation in the world.

### C++ Support Layer (helpers and editor tools)

The C++ code provides supplementary functions; the core system logic lives in Blueprint.

| Class | Description |
|-------|-------------|
| `UReaperAudioCaptureComponent` | SceneComponent parent for BP_AudioCapture_Comp. Provides Copy Settings and Debug Log functions that operate on a user-assigned `AudioCaptureTarget`. |
| `UReaperAudioHelpers` | Blueprint library: copy/set SoundClass and Attenuation on any SynthComponent. |
| `UReaperOSCSender` | Blueprint library: `QuickSendMessage` sends raw OSC 1.0 packets over UDP. |
| `FReaperOSCMessage` | Internal struct that builds OSC 1.0 packets (float and bang messages). |
| `UReaperUnrealBridgeDataTableHelpers` | DataTable lookup helpers for Reaper actions and OSC commands. |
| `UK2Node_GetReaperAction` | Editor node: searchable Reaper action dropdown → CommandID string. |
| `UK2Node_GetOSCCommand` | Editor node: searchable OSC command dropdown → address, type, category. |
| `SGraphNode_ReaperDropdown` | Custom graph node widget with searchable dropdown for DataTable rows. |

## Usage

### Example: Weapon Fire Flow

On `WPN_AssaultRifle` (or any weapon), `BP_AudioCapture_Comp` is added as a component. When the weapon fires:

1. **Copy Settings from Sound Asset** — Grabs SoundClass and Attenuation from the fire sound asset.
2. **Activate Audio from Reaper** — Spawns `BP_AudioFromReaper`, attaches it to the weapon owner, starts audio capture.
3. **Send OSC Trigger Action** — Tells Reaper to trigger the corresponding sound.
4. **Send OSC Play from Edit Cursor** — Tells Reaper to start playback.

The audio captured from Reaper inherits the weapon's SoundClass and Attenuation, so it sounds like it's coming from the weapon in 3D space.

### Setting Up Audio Capture Target

After spawning `BP_AudioFromReaper`, set the `Audio Capture Target` property on `BP_AudioCapture_Comp` to point to the spawned actor's `AudioCaptureInBP` component. The Copy Settings and Debug Log functions will operate on that target.

### Sending OSC to Reaper

1. In Reaper, enable OSC control surface (Options → Preferences → Control/OSC/Web).
2. In a Blueprint, use **Get Reaper Action** to select an action from the searchable dropdown (outputs a CommandID string).
3. Build the OSC address as `/action/{CommandID}` and send with **Quick Send Message** (IP, Port, Address, Value) or through the component's OSC functions.

### Key Blueprint Assets

| Asset | Type | Description |
|-------|------|-------------|
| `BP_AudioCapture_Comp` | Component | System orchestrator: spawning, OSC, audio settings, stream management |
| `BP_AudioFromReaper` | Actor | Runtime audio source with AudioCaptureComponent and Sphere |
| `ReaperActions_DataTable` | DataTable | All Reaper actions with CommandID, name, category |
| `DT_Reaper_OSCList` | DataTable | OSC command patterns with address, argument type, examples |
| `CC_AudioCapture` | Sound Concurrency | Concurrency settings for audio capture |

## Engine Compatibility

| Engine Version | Status |
|----------------|--------|
| UE 5.5 | Supported |
| UE 5.6 | Supported |
| UE 5.7 | Supported |

**When copying the plugin to a new project**, always delete the `Intermediate/` and `Binaries/` folders first. These contain project-specific generated code and compiled binaries that will be regenerated on first build.

## Plugin Structure

```
ReaperUnrealBridge/
├── Content/
│   ├── BP_AudioCapture_Comp.uasset
│   ├── BP_AudioFromReaper.uasset
│   ├── CC_AudioCapture.uasset
│   ├── ReaperActions_DataTable.uasset
│   ├── DT_Reaper_OSCList.uasset
│   ├── M_ReaperLogo.uasset
│   ├── ReaperLogo.uasset
│   ├── STRUCT_ActionIDs.uasset
│   ├── STRUCT_ReaperOSCList.uasset
│   ├── OSC/
│   └── Tutorial/
│       └── LVL_ReaperUnrealBridge_Tutorial.umap
├── Source/
│   ├── ReaperUnrealBridge/          (Runtime module)
│   │   ├── ReaperAudioCaptureComponent.h/.cpp
│   │   ├── ReaperAudioHelpers.h/.cpp
│   │   ├── ReaperOSCSender.h/.cpp
│   │   ├── ReaperOSCMessage.h/.cpp
│   │   ├── ReaperUnrealBridgeDataTableHelpers.h/.cpp
│   │   ├── ReaperUnrealBridge.h/.cpp
│   │   └── ReaperUnrealBridge.Build.cs
│   └── ReaperUnrealBridgeEditor/    (Editor-only module)
│       ├── K2Node_GetReaperAction.h/.cpp
│       ├── K2Node_GetOSCCommand.h/.cpp
│       ├── K2Node_ReaperBase.h/.cpp
│       ├── SGraphNode_ReaperDropdown.h/.cpp
│       ├── ReaperUnrealBridgeEditor.h/.cpp
│       └── ReaperUnrealBridgeEditor.Build.cs
├── ReaperUnrealBridge.uplugin
└── README.md
```

## License

See project license.
