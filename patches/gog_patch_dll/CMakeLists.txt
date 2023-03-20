set(TARGET gog_patch_dll)

add_library(gog_patch_dll STATIC
        gog_patch_dll.cpp
        gog_cfg.cpp
        gog_globals.cpp
        gog_fake.cpp
        gog_exports.cpp
        asm/patch_RtGuiView.cpp
        asm/patch_settings.cpp
        asm/patch_SurfaceHolder_setTexture.cpp
        asm/patch_GetVersion.cpp
        asm/patch_parseCommandLine.cpp
        asm/patch_WndProc.cpp
        fake/FakeD3D.cpp
        fake/FakeD3D2.cpp
        fake/FakeD3D3.cpp
        fake/FakeDevice3.cpp
        fake/FakeDirectDraw1.cpp
        fake/FakeDirectDraw2.cpp
        fake/FakeDirectDraw4.cpp
        fake/FakeGammaControl.cpp
        fake/FakeSurface.cpp
        fake/FakeSurface4.cpp
        fake/FakeTexture.cpp
        fake/FakeViewport3.cpp
        fake/FakeZBuffer.cpp
        fake/FakeUnknown.cpp
        )
target_include_directories(gog_patch_dll PUBLIC include)
target_compile_definitions(gog_patch_dll PRIVATE DIRECTINPUT_VERSION=0x0500 DIRECT3D_VERSION=0x0600)
target_link_libraries(gog_patch_dll PRIVATE Winmm Ddraw dxguid)

target_link_libraries(gog_patch_dll PRIVATE
        dk2_utils
        dk2_hooks
        dk2_mapping
        )
