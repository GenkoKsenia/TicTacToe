//----------------------------------------------------------------------------
#ifndef TabPgDlgH
#define TabPgDlgH
//----------------------------------------------------------------------------
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.ComCtrls.hpp>
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
class TPagesDlg : public TForm
{
__published:
	TPanel *Panel1;
	TPanel *Panel2;
	TPageControl *PageControl1;
	TTabSheet *TabSheet1;
	TTabSheet *TabSheet2;
	TTabSheet *TabSheet3;
	TButton *OKBtn;
	TButton *CancelBtn;
	TButton *HelpBtn;
private:
public:
	virtual __fastcall TPagesDlg(TComponent* AOwner);
};
//----------------------------------------------------------------------------
extern PACKAGE TPagesDlg *PagesDlg;
//----------------------------------------------------------------------------
#endif    
