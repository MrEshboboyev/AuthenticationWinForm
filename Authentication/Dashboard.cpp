#include "Dashboard.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]

int main1()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Authentication::Dashboard form;
	Application::Run(% form);

	return 0;
}