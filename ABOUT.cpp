//---------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop

#include "About.h"
//--------------------------------------------------------------------- 
#pragma resource "*.dfm"
TAboutBox *AboutBox;
//--------------------------------------------------------------------- 
__fastcall TAboutBox::TAboutBox(TComponent* AOwner)
	: TForm(AOwner)
{
}
//Кнопка Ок----------------------------------------------------------------
void __fastcall TAboutBox::OKButtonClick(TObject *Sender)
{
     Close();
}
//---------------------------------------------------------------------------

