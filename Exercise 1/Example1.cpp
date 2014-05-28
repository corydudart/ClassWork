//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Example1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
int turn = 1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
	ShowMessage("Hello World");
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button2Click(TObject *Sender)
{
	int sumMe1, sumMe2, answer;

	sumMe1 = StrToInt(Edit1->Text);
	sumMe2 = StrToInt(Edit2->Text);
	answer = sumMe1 + sumMe2;
	Edit3->Text = IntToStr( answer );

	Edit1->Text = "";
	Edit2->Text = "";
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Button3Click(TObject *Sender)
{
   TButton *onePressed = (TButton* ) Sender;
	if (turn == 1) {
		onePressed->Caption = "X"  ;
		turn = 2 ;
		onePressed->Enabled = false;

	}
	else if (turn == 2) {
		onePressed->Caption = "O"  ;
		turn = 1;
			onePressed->Enabled = false;
	}
}
//---------------------------------------------------------------------------


