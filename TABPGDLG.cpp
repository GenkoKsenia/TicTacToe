//---------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop

#include "TabPgDlg.h"
#include <iostream>
#include <fstream>
//---------------------------------------------------------------------
#pragma resource "*.dfm"
TPagesDlg *PagesDlg;
using namespace std;
//--------------------------------------------------------------------- 
__fastcall TPagesDlg::TPagesDlg(TComponent* AOwner)
	: TForm(AOwner)
{
}
//Кнопка Ок------------------------------------------------------------
void __fastcall TPagesDlg::OKBtnClick(TObject *Sender)
{
Close();
}
//---------------------------------------------------------------------------


