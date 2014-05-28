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
	Image1-> Top -=6;
	Edit1->Text = IntToStr(Image1->Top) + " , " + IntToStr(Image1->Left);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button2Click(TObject *Sender)
{
 Image1->Left -=6;
 Edit1->Text = IntToStr(Image1->Top) + " , " + IntToStr(Image1->Left);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button3Click(TObject *Sender)
{
			 Image1->Left +=6;
			 Edit1->Text = IntToStr(Image1->Top) + " , " + IntToStr(Image1->Left);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button4Click(TObject *Sender)
{
			 Image1-> Top +=6;
			 Edit1->Text = IntToStr(Image1->Top) + " , " + IntToStr(Image1->Left);
}
//---------------------------------------------------------------------------

//---------------------------------------------------------------------------
void __fastcall TForm1::StartClick(TObject *Sender)
{
	Timer1->Enabled=true;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Timer1Timer(TObject *Sender)
{
	int count = StrToInt (curCount->Caption);
	if (count <=0) {
		curCount ->Caption = 10;
		Timer1->Enabled = false;
	}
	else if (count >0) {
		count--;
		curCount->Caption = IntToStr(count);
		 }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::FormCreate(TObject *Sender)
{
   Edit1->Text = IntToStr(Image1->Top) + " , " + IntToStr(Image1->Left);
}
//---------------------------------------------------------------------------
