Ember is Dungeon Keeper II patching launcher.

Ember tries to achieve several DKII patch/mod development goals:
- Ember is trying to make good patch ecosystem! There is hook engine(`include/api/patch.h`).
But, you don't need to write hooks most of the time. I've collected all `chunk references` between code and data(`mappings/references.map`).
Instead of writing hook, you just replace cross-references to your proxy method.
Every fix/patch/tweak should be placed in the `patches` directory with a proper file name/path and defined in `include/patches.h` header file. Enable them in `main.cpp` for now.
If your patches depends on each other, then create subdirectory in `patches` directory and apply them as group or create api for your patch in `launcher/include/patches/<patch_name>.h`.
Allow users to check with api that your patch was applied or not.
- You can work with `dk2.dll` instead of exe file. `DKII.exe` just has no `relocation table`, so exe is always loading at `0x400000` base address.
But, dll has the `relocation table`, built from the `chunk references` file!
- You can link your code directly to `dk2.dll`. Ember has manually written `include/dk2/*.h` header files to link with `dk2.dll` symbols.
A lot of researching work was made to build function/data name mapping(`mappings/exports.map`).
Based on this mapping, dll has an `export table`. So, another exe/dll can use those symbols to call/patch/hook them.
As dll has `export table`, you can generate lib file with Visual Studio tool `lib` and use it in build process.
- You can collect the stack trace! `DKII.exe` does not use ebp register as frame stack bottom location. So you can't walk DKII stack frames using this register.
I've collected all the `esp register modification instruction locations`, so you can walk the stack based on this mapping(`mappings/stack.map`).
- (Planned for the future) Make launcher gui, where users can enable/disable/configure patches

Requirements:
- Python 3
- Visual Studio 2022
- Dungeon Keeper II v1.70

How to build:
- `mkdir build && cd build`
- `"D:\Program Files\Visual Studio Community\2022\VC\Auxiliary\Build\vcvars32.bat"`
- `cmake -DCMAKE_BUILD_TYPE=Debug -GNinja -DDK2_DIR="D:/Games/Dungeon Keeper 2" ..`
- `cmake --build .`
- `"D:\Games\Dungeon Keeper 2\bootstrap_patcherd.exe" -32BITEVERYTHING`
