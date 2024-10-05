#include <windows.h>
#include <Lmcons.h>
#include <stdio.h>
int main(){

  /* char name[UNLEN + 1];
    DWORD cch = UNLEN + 1;
    if (GetUserName(name, &cch))
    {
        char cmd[100 + UNLEN + 1];
        sprintf(cmd, "echo The username is \"%s\"", name); 
        system(cmd);
    } */


if(MessageBoxW(
        NULL,
        L"Skibidi Ohio Rizz???",
        L"Sigma Chad",
        MB_ICONEXCLAMATION | MB_YESNO
        
    ) == IDNO ){

 STARTUPINFOW si = {0};  
 PROCESS_INFORMATION pi = {0}; 
   CreateProcessW(
      L"C:\\Windows\\System32\\notepad.exe",
      NULL,
      NULL,
      NULL,
      FALSE, 
      BELOW_NORMAL_PRIORITY_CLASS,
      NULL,
      NULL,
      &si, 
      &pi
   );
}
 

    return EXIT_SUCCESS;
}
