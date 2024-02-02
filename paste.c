#include <windows.h>

void
_start(void)
{
	HANDLE data, out;
	char *text;

	if (!OpenClipboard(NULL)) ExitProcess(1);
	if (!(data = GetClipboardData(CF_TEXT))) ExitProcess(1);
	if (!(text = GlobalLock(data))) ExitProcess(1);

	out = GetStdHandle(STD_OUTPUT_HANDLE);
	WriteFile(out, text, lstrlen(text), NULL, NULL);
	ExitProcess(0);
}
