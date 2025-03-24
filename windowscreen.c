#include <stdio.h>
#include <windows.h>

int WINAPI WinMain(HINSTANCE HInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow) 
{
    MessageBox(NULL, "Hello World!", "Note", MB_OK);
    return 0;
}