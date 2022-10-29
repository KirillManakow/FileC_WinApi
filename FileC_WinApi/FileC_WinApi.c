#include <Windows.h>
#include <stdio.h>

int WINAPI WinMain(HINSTANCE hlnstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
	DWORD d;
	LPCSTR str = calloc(100, 1);

	HANDLE FileHandle  = CreateFile(L"OTV.txt",	GENERIC_READ | GENERIC_WRITE,FILE_SHARE_WRITE | FILE_SHARE_READ, NULL, CREATE_NEW,		FILE_ATTRIBUTE_NORMAL | FILE_FLAG_OVERLAPPED, 0);

	HANDLE 	FileHandleKoef = CreateFile(L"Koef.txt",GENERIC_READ | GENERIC_WRITE,FILE_SHARE_WRITE | FILE_SHARE_READ, NULL, CREATE_NEW,		FILE_ATTRIBUTE_NORMAL | FILE_FLAG_OVERLAPPED, 0);

	ReadFile(FileHandleKoef, str, 100, &d, NULL);
}