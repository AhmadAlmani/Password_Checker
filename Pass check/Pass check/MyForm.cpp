#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread] // Required for Windows Forms applications
int main(array<String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    // Create an instance of the main form and run the application
    Passcheck::MyForm form;
    Application::Run(% form);

    return 0;
}