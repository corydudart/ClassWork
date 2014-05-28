//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit2.h"
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
void __fastcall TForm1::Button1Click(TObject *Sender)
{
player = 1;
Button1->Caption = "Restart";
for (int  i= 0; i < 3; i++) {
	for (int j=0; j<3; j++)
	 {
	 if (MyButton[i] [j] == NULL) // only create the object if it does not exist

	 {
	 MyButton[i] [j] = new TMyButton(this);
	 MyButton[i] [j]->Parent = this;
	 MyButton[i] [j]->Top = 100 + (j*55);
	 MyButton[i] [j]->Left = 100+ (i*55);

	 }
	 else // object already here so just reset the state of the object
	 {
	 MyButton[i][j]->Enabled = true;
	 MyButton[i][j]->Caption = "";

	 }
	}
  }
}
//---------------------------------------------------------------------------
