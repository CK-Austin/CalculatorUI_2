#pragma once
#include <wx/wx.h>
#include "ButtonFactory.h"
#include "Processor.h"
#include <string>

class Calculator : public wxFrame
{
public:
	Calculator(const wxString& title);

	wxBoxSizer* sizer;
	wxGridSizer* gs;
	wxTextCtrl* display;
	std::string s1;
	std::string s2;
	
	void OnButtonClicked(wxCommandEvent& evt);
	
	
	wxDECLARE_EVENT_TABLE();

};

