#include "RegAndLogPg.h"
#include<Windows.h>
using namespace FinalProject_ISE;
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	Application::Run(gcnew RegAndLogPg());
	return 0;
}



