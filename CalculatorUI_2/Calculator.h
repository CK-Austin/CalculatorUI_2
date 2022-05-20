#pragma once
#include <wx/wx.h>
#include "ButtonFactory.h"

class Calculator : public wxFrame
{
public:
	Calculator(const wxString& title);

	wxBoxSizer* sizer;
	wxGridSizer* gs;
	wxTextCtrl* display;

	void OnButtonClicked(wxCommandEvent& evt);

	wxDECLARE_EVENT_TABLE();

};

