//----------------------------------------------------------------------------
#ifndef OkCnHlp2H
#define OkCnHlp2H
//----------------------------------------------------------------------------
#include <OKCANCL2.h>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Buttons.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Graphics.hpp>
#include <System.Classes.hpp>
#include <System.SysUtils.hpp>
#include <Winapi.Windows.hpp>
#include <System.hpp>
//----------------------------------------------------------------------------
class TOKHelpRightDlg : public TOKRightDlg
{
__published:
	TButton *HelpBtn;
	void __fastcall HelpBtnClick(TObject *Sender);
private:
public:
	virtual __fastcall TOKHelpRightDlg(TComponent* AOwner);
};
//----------------------------------------------------------------------------
extern PACKAGE TOKHelpRightDlg *OKHelpRightDlg;
//----------------------------------------------------------------------------
#endif    
