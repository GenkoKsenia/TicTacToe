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
#include <Vcl.Imaging.jpeg.hpp>
//----------------------------------------------------------------------------
class TPagesDlg : public TForm
{
__published:
	TPanel *Panel1;
	TPanel *Panel2;
	TPageControl *PageControl;
	TTabSheet *TabSheet1;
	TTabSheet *TabSheet2;
	TTabSheet *TabSheet3;
	TButton *OKBtn;
	TImage *Image1;
	TLabel *Label1;
	TLabel *Label2;
	TLabel *Label3;
	TLabel *Label4;
	TImage *Image2;
	TImage *Image3;
	TImage *Image4;
	TImage *Image5;
	TImage *Image6;
	TLabel *Label5;
	TLabel *Label6;
	TLabel *Label7;
	TImage *Image7;
	TImage *Image9;
	TImage *Image8;
	TTabSheet *TabSheet4;
	TLabel *Label8;
	TLabel *Label9;
	TLabel *Label10;
	TLabel *Label11;
	TImage *Image10;
	TImage *Image11;
	TImage *Image12;
	TImage *Image13;
	TTabSheet *TabSheet5;
	TTabSheet *TabSheet6;
	TLabel *Label12;
	TLabel *Label13;
	TImage *Image14;
	TImage *Image15;
	TImage *Image16;
	TImage *Image17;
	TLabel *Label14;
	TImage *Image18;
	TImage *Image19;

	void __fastcall OKBtnClick(TObject *Sender);
private:
public:
	virtual __fastcall TPagesDlg(TComponent* AOwner);
};
//----------------------------------------------------------------------------
extern PACKAGE TPagesDlg *PagesDlg;
//----------------------------------------------------------------------------
#endif    
