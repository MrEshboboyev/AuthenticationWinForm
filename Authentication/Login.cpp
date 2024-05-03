#include "Login.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]

int main()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Authentication::Login form;
	Application::Run(% form);
}