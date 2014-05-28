//---------------------------------------------------------------------------
#ifndef Unit2H
#define Unit2H
#include <Classes.hpp>
#include <StdCtrls.hpp>
class TMyButton : public TButton
{
private:

public:
 __fastcall TMyButton(TComponent* Owner);
 void __fastcall Play(TObject *Sender);

};
//---------------------------------------------------------------------------
extern PACKAGE TMyButton *MyButton[3][3];
//the extern informs other modules that the variable will be define later
#endif
