//---------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop

#include "TabPgDlg.h"
//---------------------------------------------------------------------
#pragma resource "*.dfm"
TPagesDlg *PagesDlg;
//--------------------------------------------------------------------- 
__fastcall TPagesDlg::TPagesDlg(TComponent* AOwner)
	: TForm(AOwner)
{
}
//---------------------------------------------------------------------
void __fastcall TPagesDlg::PageControlChange(TObject *Sender)
{
TabSheet1->Caption = "Крестики-Нолики";
TabSheet2->Caption = "Игра с роботом";
TabSheet3->Caption = "Игра с другом";
}
//---------------------------------------------------------------------------

void __fastcall TPagesDlg::OKBtnClick(TObject *Sender)
{
Close();
}
//---------------------------------------------------------------------------

