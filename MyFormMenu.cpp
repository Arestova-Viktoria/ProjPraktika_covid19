#include "MyFormMenu.h"
#include <Windows.h>
using namespace ProjPraktika; // �������� �������
[STAThread]
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew MyFormMenu);
	return 0;
}

