# ReaperUnrealBridge

Instantly prototype your audio from Reaper to Unreal with two-way sync between the two. Add one component on your Actor in Unreal and hear Reaper’s audio spatialized in-engine. Trigger actions in Reaper from Unreal.

## How It Works

When something fires in Unreal (a weapon, a door, whatever), the plugin tells Reaper to play via OSC, captures that audio back through a virtual cable, and spatializes it in Unreal. You keep Reaper’s sound and processing while using Unreal’s 3D audio, SoundClass, and Attenuation.

## Quick Install

1. Copy the `ReaperUnrealBridge` folder into your project’s `Plugins/` directory.
2. Delete any `Intermediate/` and `Binaries/` folders inside the copied plugin (they’re build leftovers and will be recreated).
3. Open or restart Unreal. The plugin is picked up and built automatically.
4. In the editor: **Edit → Plugins**, search for **ReaperUnrealBridge**, and make sure it’s enabled.

That’s it. No project settings, no Game Instance setup.

---

## Setup in Reaper

To hear Reaper in Unreal, Reaper’s output has to go to a virtual device that Unreal can capture as “microphone” input. The simplest way for most people is something like VB-Cable (free): https://vb-audio.com/Cable/

1. In Reaper: **Preferences → Device**. Set **Audio output** to **CABLE Input**.
2. In Windows Sound settings, set your **microphone (input)** to **CABLE Output**. Reaper’s output is now what Unreal sees as the mic.

If you also want Unreal to trigger actions in Reaper (play, stop, go to marker, etc.):

1. **Preferences → Control/OSC/web**. Click **Add**.
2. Use something like:
   - **Control surface mode:** OSC (Open Source Control)
   - **Device name:** ReaperUnrealBridge
   - **Pattern config:** Default
   - **Mode:** Local Port
   - **Local listen port:** 8010 (or any free port)
   - **Allow binding messages to REAPER actions and FX learn:** enabled
3. Note your machine’s local IP and the port; you’ll need them in Unreal.

---

## Setup in Unreal: The One Component You Need

The heart of the plugin is **CP_ReaperUnrealBridge**. It’s a Blueprint component. Add it to the Actor that should drive Reaper (e.g. your weapon, your vehicle). Everything else in the plugin exists to support this component.

### Where to Find It

In the Content Browser, search for **ReaperUnrealBridge**. You’ll see the main asset **CP_ReaperUnrealBridge** (Blueprint Class). The rest (e.g. `BP_AudioCapture_Comp`, `BP_AudioFromReaper`, data tables, Tutorial folder) are helpers; you don’t need to touch them unless you want to dig deeper.

### Settings (Variables)

On **CP_ReaperUnrealBridge**, under **Variables → Settings**:

| Variable      | Type    | What to set |
|---------------|---------|-------------|
| **OSC Ip Adress** | String  | The IP you noted from Reaper (often your PC’s local IP). |
| **OSC Port**      | Integer | The port you set in Reaper (e.g. 8010). |

Set these once and the component can talk to Reaper.

### Functions You Use

From the **CP Reaper Unreal Bridge** component you only need a small set of functions. The component also has other functions used internally (e.g. restoring sound base volume); those are handled for you and you can ignore them.

**Main functions to use:**

| Function | What it does |
|----------|----------------|
| **Place Audio From Reaper** | Spawns the audio source, attaches it to your owner, starts capturing from the virtual cable. Call this when you want to “turn on” Reaper audio for this actor. |
| **Copy Settings From Sound Base** | Copies SoundClass and Attenuation from a Sound Base asset onto the capture. Optional toggle to mute the original sound. |
| **Copy Settings From Audio Component** | Same idea, but from an existing Audio Component (e.g. a reference sound already in the level). |
| **OSC_Send_PlayFromEditCursor** | Sends OSC to Reaper to start playback from the edit cursor. |
| **OSC_Send_Stop** | Sends OSC to Reaper to stop playback. |
| **OSC_Send_Action** | Sends a Reaper action by ID (e.g. go to marker, record). Use the **Get Reaper Action** node to get the command ID from the ReaperActions_DataTable. |

**Optional / advanced:** If you open the component’s function list you’ll see more (e.g. `RestoreSoundSettings`, `ApplyCopiedSoundSettings`, `SetSoundSettings`, `DebugSounds`, `SpawnActor`, `AttachActorToActor`, `StartStream`, `StopStream`, `OSC_Send`). These are used internally or for edge cases. You can use them if you need finer control, but normal workflows only need the six functions above.

---

## Example: Weapon Fire

1. Open **CP_ReaperUnrealBridge**, go to **Variables → Settings**, and set **OSC Ip Adress** and **OSC Port** to match Reaper.
2. In your weapon Blueprint (e.g. `BP_Weapon`), add **CP_ReaperUnrealBridge** as a component.
3. From your firing event (e.g. “Event FiredWeapon”), drag a reference to the **CP Reaper Unreal Bridge** component and call, in order:
   - **Place Audio From Reaper** (spawn and attach the audio, start capture).
   - **Copy Settings From Sound Base** (feed it your existing fire sound asset; check “Mute Source” if you don’t want the original to play).
   - **OSC_Send_PlayFromEditCursor** (tell Reaper to play).
   - **OSC_Send_Action** (e.g. “Go to marker 01”). Use the **Get Reaper Action** node and pick something like “Markers: Gotomarker01” to get the Action ID.

When the weapon fires, Reaper plays, and the audio is captured and spatialized at the weapon’s location using the same SoundClass and Attenuation as your reference sound.

---

## Key Assets

| Asset | Type | Role |
|-------|------|------|
| **CP_ReaperUnrealBridge** | Blueprint Class | The main component. Add this to your actors; it runs the important commands. |
| **BP_AudioCapture_Comp** | Blueprint Class | Helper used by the bridge. |
| **BP_AudioFromReaper** | Blueprint Class | Runtime audio actor with AudioCaptureComponent; spawned by the bridge. You can tweak its look (e.g. the sphere) if you want. |
| **ReaperActions_DataTable** | Data Table | Reaper actions (Command ID, name, category). Used by **Get Reaper Action**. |
| **DT_Reaper_OSCList** | Data Table | OSC command patterns. Used by **Get OSC Command**. |
| **CC_AudioCapture** | Sound Concurrency | Limits to one capture at a time so only one Reaper stream plays. |
| **STRUCT_ActionIDs** / **STRUCT_ReaperOSCList** | Structures | Backing data for the data tables. |

---

## Requirements

- **Unreal Engine 5.5+** (tested on 5.5, 5.6, 5.7).
- The **AudioCapture** engine plugin (enabled automatically with this plugin).
- **Reaper** (or another DAW that accepts OSC) on the same machine or network.
- A **virtual audio device** (e.g. VB-Cable) so Reaper’s output can be sent into Unreal as capture input.

---

## FAQ

**Do I need to set up a Game Instance or editor preferences?**  
No. Install the plugin, enable it, add **CP_ReaperUnrealBridge** to your Actor, set OSC IP and port, and use the six functions above.

**Why no sound in Unreal?**  
Check: (1) Reaper’s output is set to the virtual cable. (2) Windows default recording device is the cable output. (3) In Reaper, something is actually playing and the master isn’t muted. (4) You called **Place Audio From Reaper** and then **OSC_Send_PlayFromEditCursor** (or the right action) so Reaper is playing when you expect.

**Can I use a different virtual cable or JACK?**  
Yes. Any setup where Reaper’s output becomes the device Unreal’s AudioCapture uses as “microphone” will work.

**OSC from Unreal isn’t doing anything in Reaper.**  
Confirm **OSC Ip Adress** and **OSC Port** on **CP_ReaperUnrealBridge** match the Control/OSC device in Reaper. If Reaper is on another PC, use that PC’s IP and the port you opened there.

**What if I’m on a Blueprint-only project and get “Missing Modules” or “build through IDE”?**  
The plugin can be built when you open the project. If you prefer to avoid that, see **Precompiling binaries** below; you can ship prebuilt plugin binaries so the engine doesn’t need to compile.

**Tutorial map?**  
There is a Tutorial folder; the level there is still under construction and may not be fully wired yet.

---

## Engine Compatibility

| Engine | Status   |
|--------|----------|
| UE 5.5 | Supported |
| UE 5.6 | Supported |
| UE 5.7 | Supported |

When you copy the plugin to a new project, delete `Intermediate/` and `Binaries/` in the plugin folder so they’re regenerated for that project.

---

## Precompiling Binaries (Optional)

If you want to ship the plugin without requiring users to compile (handy for Blueprint-only projects), you can build it once and distribute the built plugin.

**Option A (from a C++ project):**

1. Use a C++ project with the same engine version (e.g. 5.5).
2. Copy the full `ReaperUnrealBridge` plugin folder into that project’s `Plugins/` directory.
3. Open the project once so the solution is generated, then close the editor.
4. Open the `.sln` in Visual Studio and build **Development Editor** (or **Shipping**).
5. After a successful build, binaries are in `Plugins/ReaperUnrealBridge/Binaries/Win64/` (or the right platform).
6. For distribution: copy the whole `ReaperUnrealBridge` folder (including `Binaries/`). In that copy only, set `"Installed": true` in `ReaperUnrealBridge.uplugin` so the engine uses the DLLs and doesn’t try to compile.

**Option B (RunUAT):**

From a command prompt:

```bat
"C:\Program Files\Epic Games\UE_5.5\Engine\Build\BatchFiles\RunUAT.bat" BuildPlugin ^
  -Plugin="C:\path\to\ReaperUnrealBridge\ReaperUnrealBridge.uplugin" ^
  -Package="C:\path\to\output\Packaged"
```

Adjust the engine path and plugin path. The packaged folder will contain the built plugin. In the copy you distribute, set `"Installed": true` in `ReaperUnrealBridge.uplugin`.

Binaries are per engine version and per platform. Keep `"Installed": false` in your source repo so your own builds still compile the plugin from the IDE.

---

## Architecture (For the Curious)

The plugin is built in layers. **CP_ReaperUnrealBridge** is the main component you use; under the hood it uses:

- **BP_AudioCapture_Comp** (Blueprint): Orchestrates spawning, attaching, stream start/stop, and OSC. The “Place Audio From Reaper” and related logic lives here.
- **BP_AudioFromReaper** (Blueprint Actor): Holds the engine `AudioCaptureComponent` and a simple visual (e.g. sphere). Spawned at runtime by the component.
- **C++**: Helpers for copying SoundClass/Attenuation, sending raw OSC over UDP, and editor nodes like **Get Reaper Action** / **Get OSC Command** with searchable DataTable dropdowns.

You don’t need to modify any of this for normal use; it’s here if you want to understand or extend the plugin.

---

## Plugin Structure

```
ReaperUnrealBridge/
├── Content/
│   ├── CP_ReaperUnrealBridge.uasset   (main component)
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
│   ├── ReaperUnrealBridge/           (Runtime)
│   └── ReaperUnrealBridgeEditor/     (Editor)
├── ReaperUnrealBridge.uplugin
└── README.md
```

---

## License

See the project license.
