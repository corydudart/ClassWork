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
void __fastcall TForm1::Button1Click(TObject *Sender)
{
	ComboBox1->Items->Add(Edit1->Text);
	Edit1->Text = "";
}
//---------------------------------------------------------------------------
void __fastcall TForm1::ComboBox1Change(TObject *Sender)
{
	AnsiString tmpStr;

	tmpStr=ComboBox1->Items->Strings[ComboBox1->ItemIndex];
	 tmpStr="You Selected: " +tmpStr;
	 ShowMessage(tmpStr);
}
//---------------------------------------------------------------------------
