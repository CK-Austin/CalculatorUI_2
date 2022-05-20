#pragma once
#include "Calculator.h"

class ButtonFactory
{
public:
	ButtonFactory();
	~ButtonFactory();
	wxButton* CreateAddButton(wxWindow* parent, wxWindowID id, const wxString& label, const wxPoint& pos, const wxSize& size, long style, const wxValidator& validator, const wxString& name);

	

	
};

