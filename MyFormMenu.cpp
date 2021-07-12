#include "MyFormMenu.h"
#include <Windows.h>
using namespace ProjPraktika; // Название проекта
[STAThread]
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew MyFormMenu);
	return 0;
}

