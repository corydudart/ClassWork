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
	 float count = 0;
	 int twenty, ten, five, toonie, loonie, quarter, dime, nickle, penny;
	  twenty= ten= five= toonie= loonie= quarter= dime= nickle= penny=0;
	 count = (StrToFloat(cashTendered->Text)-StrToFloat(saleAmt->Text))*100;
	 Edit1->Text = "$"+FloatToStr(count/100);

	 twenty = count/2000; count = fmod(count, 2000);
	 ten	= count/1000; count = fmod(count, 1000);
	 five	= count/500;  count = fmod(count, 500);
	 toonie = count/200;  count = fmod(count, 200);
	 loonie = count/100;  count = fmod(count, 100);
	 quarter= count/25;	  count = fmod(count, 25);
	 dime	= count/10;	  count = fmod(count, 10);
	 nickle = count/5;	  count = fmod(count, 5);
	 penny  = count;



	 Edit3->Text = FloatToStr(twenty);
	 Edit4->Text = FloatToStr(ten);
	 Edit8->Text = FloatToStr(five);
	 Edit7->Text = FloatToStr(toonie);
	 Edit5->Text = FloatToStr(loonie);
	 Edit6->Text = FloatToStr(quarter);
	 Edit9->Text = FloatToStr(dime);
	 Edit11->Text = FloatToStr(nickle);
	 Edit10->Text = FloatToStr(penny);

	 cashTendered->Text = "";
	 saleAmt->Text = "";




}
//---------------------------------------------------------------------------


