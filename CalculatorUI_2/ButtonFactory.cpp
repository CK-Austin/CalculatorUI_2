#include "ButtonFactory.h"

ButtonFactory::ButtonFactory()
{
	
}

ButtonFactory::~ButtonFactory()
{

}

wxButton* ButtonFactory::CreateAddButton(wxWindow* parent, wxWindowID id, const wxString& label, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = 0, const wxValidator& validator = wxDefaultValidator, const wxString& name = wxButtonNameStr)
{
  wxButton* b = new wxButton(parent, id, label, pos, size, style, validator, name);

   return b;
}

