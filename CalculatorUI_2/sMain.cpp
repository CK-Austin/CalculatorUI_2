#include "sMain.h"
#include "Gridsizer.h"

wxIMPLEMENT_APP(sMain);

bool sMain::OnInit()
{
	GridSizer* gs = new GridSizer(wxT("GridSizer"));
	gs->Show(true);

	return true;
	
	

	
	
}

sMain::sMain()
{

}

sMain::~sMain()
{

}