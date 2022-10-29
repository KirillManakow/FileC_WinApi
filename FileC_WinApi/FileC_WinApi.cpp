#include <Windows.h>
#include <stdio.h>

int WINAPI WinMain(HINSTANCE hlnstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
	int message = MessageBox(NULL, L"Îøèáêà", L"APP", MB_YESNOCANCEL | MB_ICONQUESTION);

	switch (message)
	{
	case IDYES:
	{
		MessageBox(NULL, L"Âû íàæàëè íà ÄÀ", L"APP", NULL);
		break;
	}
	case IDNO:
	{
		MessageBox(NULL, L"Âû íàæàëè íà ÍÅÒ", L"APP", NULL);
		break;
	}
	case IDCANCEL:
	{
		MessageBox(NULL, L"Ïðîãðàììà çàêðûòà", L"APP", NULL);
		break;
	}

	}
	return 0;
}