#include <Windows.h>


extern __declspec(dllexport) void HolaMundo() {
    MessageBoxA(NULL, "Hola Mundo, este es mi primer DLL\!", "Hola Mundo", MB_ICONINFORMATION);
}


BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
                     )
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;
}

