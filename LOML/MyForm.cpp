#include "MyForm.h"

using namespace LOML;

[STAThreadAttribute]

int main() {

	Application::Run(gcnew MyForm());

	return 0;
}