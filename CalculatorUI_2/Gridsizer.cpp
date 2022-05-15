#include "Gridsizer.h"

GridSizer::GridSizer(const wxString& title)
    : wxFrame(NULL, -1, "Calculator", wxPoint(-1, -1), wxSize(300, 400))
{
    sizer = new wxBoxSizer(wxVERTICAL);

    display = new wxTextCtrl(this, -1, wxT(""), wxPoint(10, 10),
        wxSize(-1, -1), wxTE_RIGHT);

    sizer->Add(display, 0, wxEXPAND | wxTOP | wxBOTTOM, 4);
    gs = new wxGridSizer(5, 4, 3, 3);

    gs->Add(new wxButton(this, -1, wxT("C")), 0, wxEXPAND);
    gs->Add(new wxButton(this, -1, wxT("bin")), 0, wxEXPAND);
    gs->Add(new wxButton(this, -1, wxT("mod")), 0, wxEXPAND);
    gs->Add(new wxButton(this, -1, wxT("hex")), 0, wxEXPAND);
    gs->Add(new wxButton(this, -1, wxT("/")), 0, wxEXPAND);
    gs->Add(new wxButton(this, -1, wxT("7")), 0, wxEXPAND);
    gs->Add(new wxButton(this, -1, wxT("8")), 0, wxEXPAND);
    gs->Add(new wxButton(this, -1, wxT("9")), 0, wxEXPAND);
    gs->Add(new wxButton(this, -1, wxT("*")), 0, wxEXPAND);
    gs->Add(new wxButton(this, -1, wxT("4")), 0, wxEXPAND);
    gs->Add(new wxButton(this, -1, wxT("5")), 0, wxEXPAND);
    gs->Add(new wxButton(this, -1, wxT("6")), 0, wxEXPAND);
    gs->Add(new wxButton(this, -1, wxT("+")), 0, wxEXPAND);
    gs->Add(new wxButton(this, -1, wxT("1")), 0, wxEXPAND);
    gs->Add(new wxButton(this, -1, wxT("2")), 0, wxEXPAND);
    gs->Add(new wxButton(this, -1, wxT("3")), 0, wxEXPAND);
    gs->Add(new wxButton(this, -1, wxT("-")), 0, wxEXPAND);
    gs->Add(new wxButton(this, -1, wxT("0")), 0, wxEXPAND);
    gs->Add(new wxButton(this, -1, wxT(".")), 0, wxEXPAND);
    gs->Add(new wxButton(this, -1, wxT("=")), 0, wxEXPAND);

    sizer->Add(gs, 1, wxEXPAND);
    SetSizer(sizer);
    SetMinSize(wxSize(270, 220));

    Centre();
}