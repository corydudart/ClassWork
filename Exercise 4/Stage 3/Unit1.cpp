//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::ScrollBar1Change(TObject *Sender)
{
	Label1->Caption = ScrollBar1->Position;

	if (ScrollBar1->Position == ScrollBar1->Max) {
		   ShowMessage("MAXIMUM!!!!");
	}
	if (ScrollBar1->Position == ScrollBar1->Min) {
		  ShowMessage ("MINIMUM!!!!");
	}
}
//---------------------------------------------------------------------------
