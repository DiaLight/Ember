Ember is Dungeon Keeper II patching launcher.

Ember is trying to achieve several DKII patch/mod development goals:
- Building a good patch ecosystem! There is a hook engine(`utils/include/utils/patch.h`).
But, you don't need to write hooks most of the time. I've collected all the `chunk references` between code and data(`mappings/references.map`).
Instead of writing hook, you can just replace cross-references to your proxy method.
Every fix/patch/tweak should be placed in the `patches` directory with a proper file name/path and defined in `patches/include/dk2_patches.h` header file. Enable them in `main.cpp` for now.
If your patches depends on each other, then create subdirectory in the `patches` directory and apply them as group or create api for your patch in `patches/include/patches/<patch_name>.h`.
Allow users to check with api that your patch was applied or not.
- You can work with `dk2.dll` instead of exe file. `DKII.exe` just has no `relocation table`, so exe is always loading at `0x400000` base address.
But, dll has the `relocation table`, built from the `chunk references` file!
- You can link your code directly to `dk2.dll`. Ember has autogenerated `dk2/include/*.h` header files and `dk2/*.cpp` with symbol stubs.
Links to these stubs are replaced at runtime with references to the corresponding symbols from `dk2.dll`.
A lot of researching work was made to build function/data mapping(`mappings/v170.map`).
Based on this mapping, dll also has an `export table`.
As dll has `export table`, you can generate lib file with Visual Studio tool `lib` and use it in build process.
- You can collect the stack trace! `DKII.exe` does not use ebp register as frame stack bottom location. So you can't walk DKII stack frames using this register.
I've collected all the `esp register modification instruction locations`, so you can walk the stack based on this mapping(`mappings/stack.map`).
- Users can enable/disable/configure patches in the launcher gui

Usage:
- Download zip archive from [releases](https://github.com/DiaLight/Ember/releases/latest) 
- Unpack wherever you like. Consider it a separate program with its own folder
- Run `launcher.exe`
- First you need to find the `Dungeon Keeper 2` directory using launcher. The program looks for the `DKII.exe` file and determines its version. Currently only version `1.70` is supported.
- Then you can configure resolution, etc
- Start the game with the big `start` button

The program does not modify existing game files.
For a complete removal, you must remove launcher's and `Dungeon Keeper 2\resources` directories and remove `HKEY_CURRENT_USER\SOFTWARE\Ember Launcher` registry key

Requirements:
- Python 3
- Visual Studio 2022
- Dungeon Keeper II v1.70

How to build:
- `mkdir build && cd build`
- `"D:\Program Files\Visual Studio Community\2022\VC\Auxiliary\Build\vcvars32.bat"`
- `cmake -DCMAKE_BUILD_TYPE=Debug -GNinja -DDK2_DIR="D:/Games/Dungeon Keeper 2" -DCMAKE_INSTALL_PREFIX=../bin ..`
- `cmake --build .`
- `cmake --install .`
- `"..\bin\launcher.exe"`
