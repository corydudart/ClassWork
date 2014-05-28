//---------------------------------------------------------------------------
#pragma hdrstop
#include "Unit2.h"
#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
TMyButton *MyButton[3][3]; //define array of special buttons
//---------------------------------------------------------------------------
__fastcall TMyButton::TMyButton(TComponent* Owner)
 : TButton(Owner) // have constructor set common attributes
{
 Height=50;
 Width=50;
 OnClick= Play;
}

void __fastcall TMyButton::Play(TObject *Sender)
{
	if (Form1->player == 1) {
		Caption = "X";
		Form1->player = 2;
		Enabled = false;
	}

	else if (Form1->player == 2) {
		Caption = "O";
		Form1->player = 1;
		Enabled = false;
	}

}



//-------------------------------------------------------------------------
