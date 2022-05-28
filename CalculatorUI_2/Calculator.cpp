#include "Calculator.h"
#include <vector>
#include <list>


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

	gs->Add(b.CreateAddButton(this, 4000, wxT("C"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, wxButtonNameStr), 0, wxEXPAND);
	gs->Add(b.CreateAddButton(this, 2000, wxT("bin"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, wxButtonNameStr), 0, wxEXPAND);
	gs->Add(b.CreateAddButton(this, 2000, wxT("mod"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, wxButtonNameStr), 0, wxEXPAND);
	gs->Add(b.CreateAddButton(this, 2000, wxT("hex"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, wxButtonNameStr), 0, wxEXPAND);
	gs->Add(b.CreateAddButton(this, 10013, wxT("/"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, wxButtonNameStr), 0, wxEXPAND);
	gs->Add(b.CreateAddButton(this, 10007, wxT("7"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, wxButtonNameStr), 0, wxEXPAND);
	gs->Add(b.CreateAddButton(this, 10008, wxT("8"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, wxButtonNameStr), 0, wxEXPAND);
	gs->Add(b.CreateAddButton(this, 10009, wxT("9"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, wxButtonNameStr), 0, wxEXPAND);
	gs->Add(b.CreateAddButton(this, 10012, wxT("*"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, wxButtonNameStr), 0, wxEXPAND);
	gs->Add(b.CreateAddButton(this, 10004, wxT("4"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, wxButtonNameStr), 0, wxEXPAND);
	gs->Add(b.CreateAddButton(this, 10005, wxT("5"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, wxButtonNameStr), 0, wxEXPAND);
	gs->Add(b.CreateAddButton(this, 10006, wxT("6"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, wxButtonNameStr), 0, wxEXPAND);
	gs->Add(b.CreateAddButton(this, 10010, wxT("+"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, wxButtonNameStr), 0, wxEXPAND);
	gs->Add(b.CreateAddButton(this, 10001, wxT("1"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, wxButtonNameStr), 0, wxEXPAND);
	gs->Add(b.CreateAddButton(this, 10002, wxT("2"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, wxButtonNameStr), 0, wxEXPAND);
	gs->Add(b.CreateAddButton(this, 10003, wxT("3"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, wxButtonNameStr), 0, wxEXPAND);
	gs->Add(b.CreateAddButton(this, 10011, wxT("-"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, wxButtonNameStr), 0, wxEXPAND);
	gs->Add(b.CreateAddButton(this, 10000, wxT("0"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, wxButtonNameStr), 0, wxEXPAND);
	gs->Add(b.CreateAddButton(this, 10001, wxT("."), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, wxButtonNameStr), 0, wxEXPAND);
	gs->Add(b.CreateAddButton(this, 3000, wxT("="), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, wxButtonNameStr), 0, wxEXPAND);



	sizer->Add(gs, 1, wxEXPAND);
	SetSizer(sizer);
	SetMinSize(wxSize(270, 220));

	//strings for concatenation
	s1 = "";
	s2 = "";


}



void Calculator::OnButtonClicked(wxCommandEvent& evt)
{

	wxButton* button = dynamic_cast<wxButton*>(evt.GetEventObject()); // dynamic cast to wxButton object

	Processor p;
	int counter = 0;
	double num1;
	double num2;
	double result;



	if (evt.GetId() == 10000)
	{
		display->AppendText(button->GetLabel());

		if (counter > 0)
		{
			s2 += "0";
		}
		else
		{
			s1 += "0";
		}


	}
	if (evt.GetId() == 10001)
	{
		display->AppendText(button->GetLabel());

		if (counter > 0)
		{
			s2 += "1";
		}
		else
		{
			s1 += "1";
		}
	}
	if (evt.GetId() == 10002)
	{
		display->AppendText(button->GetLabel());

		if (counter > 0)
		{
			s2 += "2";
		}
		else
		{
			s1 += "2";
		}
	}
	if (evt.GetId() == 10003)
	{
		display->AppendText(button->GetLabel());

		if (counter > 0)
		{
			s2 += "3";
		}
		else
		{
			s1 += "3";
		}
	}
	if (evt.GetId() == 10004)
	{
		display->AppendText(button->GetLabel());

		if (counter > 0)
		{
			s2 += "4";
		}
		else
		{
			s1 += "4";
		}
	}

	if (evt.GetId() == 10005)
	{
		display->AppendText(button->GetLabel());

		if (counter > 0)
		{
			s2 += "5";
		}
		else
		{
			s1 += "5";
		}
	}
	if (evt.GetId() == 10006)
	{
		display->AppendText(button->GetLabel());

		if (counter > 0)
		{
			s2 += "6";
		}
		else
		{
			s1 += "6";
		}
	}
	if (evt.GetId() == 10007)
	{
		display->AppendText(button->GetLabel());

		if (counter > 0)
		{
			s2 += "7";
		}
		else
		{
			s1 += "7";
		}
	}
	if (evt.GetId() == 10008)
	{
		display->AppendText(s1);

		if (counter > 0)
		{
			s2 += "8";
		}
		else
		{
			s1 += "8";
		}
	}
	if (evt.GetId() == 10009)
	{
		display->AppendText(button->GetLabel());

		if (counter > 0)
		{
			s2 += "9";
		}
		else
		{
			s1 += "9";
		}
	}

	if (evt.GetId() == 10010)
	{

		display->Clear();
		num1 = std::stof(s1);
		counter = 1;
	}

	if (evt.GetId() == 10011)
	{

		display->Clear();
		num1 = std::stof(s1);
		counter = 2;
	}

	if (evt.GetId() == 10012)
	{

		display->Clear();
		num1 = std::stof(s1);
		counter = 3;
	}

	if (evt.GetId() == 10013)
	{

		display->Clear();
		num1 = std::stof(s1);
		counter = 4;
	}

	if (evt.GetId() == 3000 && counter == 1)
	{

		num2 = std::stof(s2);
		double result = p.Add(&num1, &num2);
		*display << result;
	}

	if (evt.GetId() == 3000 && counter == 2)
	{

		num2 = std::stof(s2);
		double result = p.Subtract(&num1, &num2);
		*display << result;
	}

	if (evt.GetId() == 3000 && counter == 3)
	{

		num2 = std::stof(s2);
		double result = p.Multiply(&num1, &num2);
		*display << result;
	}

	if (evt.GetId() == 3000 && counter == 4)
	{

		num2 = std::stof(s2);
		double result = p.Divide(&num1, &num2);
		*display << result;
	}







	//C button to clear screen
	if (evt.GetId() == 4000)
	{
		display->Clear();
		s1.clear();
		s2.clear();
		//display->DiscardEdits();
	}
}
