#pragma once
#include <wx/wx.h>

class GridSizer : public wxFrame
{
public:
	GridSizer(const wxString& title);

	wxBoxSizer* sizer;
	wxGridSizer* gs;
	wxTextCtrl* display;

};

