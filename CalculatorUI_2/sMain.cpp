#include "sMain.h"
#include "Calculator.h"

wxIMPLEMENT_APP(sMain);

bool sMain::OnInit()
{
	Calculator* calc = new Calculator(wxT("Calculator"));
	calc->Show(true);

	return true;
	
	

	
	
}

sMain::sMain()
{

}

sMain::~sMain()
{

}