#include "Calculator.h"


wxBEGIN_EVENT_TABLE(Calculator, wxFrame)
    EVT_BUTTON(-1, OnButtonClicked)
wxEND_EVENT_TABLE()


Calculator::Calculator(const wxString& title)
    : wxFrame(NULL, -1, "Calculator", wxPoint(-1, -1), wxSize(300, 400))
{
    sizer = new wxBoxSizer(wxVERTICAL);

    display = new wxTextCtrl(this, -1, wxT(""), wxPoint(10, 10),
        wxSize(-1, -1), wxTE_RIGHT);

    sizer->Add(display, 0, wxEXPAND | wxTOP | wxBOTTOM, 4);
    gs = new wxGridSizer(5, 4, 3, 3);
    
    ButtonFactory b;
  
    gs->Add(b.CreateAddButton(this, 2000, wxT("C"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, wxButtonNameStr), 0, wxEXPAND);
    gs->Add(b.CreateAddButton(this, 2000, wxT("bin"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, wxButtonNameStr), 0, wxEXPAND);
    gs->Add(b.CreateAddButton(this, 2000, wxT("mod"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, wxButtonNameStr), 0, wxEXPAND);
    gs->Add(b.CreateAddButton(this, 2000, wxT("hex"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, wxButtonNameStr), 0, wxEXPAND);
    gs->Add(b.CreateAddButton(this, 10001, wxT("/"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, wxButtonNameStr), 0, wxEXPAND);
    gs->Add(b.CreateAddButton(this, 10001, wxT("7"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, wxButtonNameStr), 0, wxEXPAND);
    gs->Add(b.CreateAddButton(this, 10001, wxT("8"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, wxButtonNameStr), 0, wxEXPAND);
    gs->Add(b.CreateAddButton(this, 10001, wxT("9"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, wxButtonNameStr), 0, wxEXPAND);
    gs->Add(b.CreateAddButton(this, 10001, wxT("*"),  wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, wxButtonNameStr), 0, wxEXPAND);
    gs->Add(b.CreateAddButton(this, 10001, wxT("4"),  wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, wxButtonNameStr), 0, wxEXPAND);
    gs->Add(b.CreateAddButton(this, 10001, wxT("5"),  wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, wxButtonNameStr), 0, wxEXPAND);
    gs->Add(b.CreateAddButton(this, 10001, wxT("6"),  wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, wxButtonNameStr), 0, wxEXPAND);
    gs->Add(b.CreateAddButton(this, 10001, wxT("+"),  wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, wxButtonNameStr), 0, wxEXPAND);
    gs->Add(b.CreateAddButton(this, 10001, wxT("1"),  wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, wxButtonNameStr), 0, wxEXPAND);
    gs->Add(b.CreateAddButton(this, 10001, wxT("2"),  wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, wxButtonNameStr), 0, wxEXPAND);
    gs->Add(b.CreateAddButton(this, 10001, wxT("3"),  wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, wxButtonNameStr), 0, wxEXPAND);
    gs->Add(b.CreateAddButton(this, 10001, wxT("-"),  wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, wxButtonNameStr), 0, wxEXPAND);
    gs->Add(b.CreateAddButton(this, 10001, wxT("0"),  wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, wxButtonNameStr), 0, wxEXPAND);
    gs->Add(b.CreateAddButton(this, 10001, wxT("."),  wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, wxButtonNameStr), 0, wxEXPAND);
    gs->Add(b.CreateAddButton(this, 2000, wxT("="), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, wxButtonNameStr), 0, wxEXPAND);
   
   
    
    sizer->Add(gs, 1, wxEXPAND);
    SetSizer(sizer);
    SetMinSize(wxSize(270, 220));

   
}

void Calculator::OnButtonClicked(wxCommandEvent& evt)
{
    wxButton* button = dynamic_cast<wxButton*>(evt.GetEventObject());
    if (evt.GetId() == 10001)
    {
        display->AppendText(button->GetLabel());
    }
}