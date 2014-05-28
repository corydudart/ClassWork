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
int factorial(int num)
{
	if(num<1)return 0;

	else if (num==1)
		   return 1;

	else
	 return num*factorial(num-1);

}

void anotherProc( AnsiString Msg)
{
 ShowMessage(Msg);

}

void __fastcall TForm1::Button1Click(TObject *Sender)
{
   anotherProc("Hello World");
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button2Click(TObject *Sender)
{
	Label1->Caption = factorial(StrToInt(Edit1->Text));
}
//---------------------------------------------------------------------------
