//---------------------------------------------------------------------------
#include <iostream>
#include <vcl.h>
#pragma hdrstop
#include<fstream>
#include<string>
#include "Unit3.h"
#include "Unit1.h"
#include "ABOUT.h"
#include "Unit5.h"
#include "TABPGDLG.h"
#include <string.h>
using namespace std;
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm3 *Form3;
//---------------------------------------------------------------------------
__fastcall TForm3::TForm3(TComponent* Owner)
	: TForm(Owner)
{
}

char turn = 'X';
char check=0;
int wp1=0;
int wp2=0;
//������� �� ������ ���� ����-----------------------------------------------
void __fastcall TForm3::Button_Click(TObject *Sender)
{
	TButton *senderB = (TButton*)Sender;
	senderB->Caption=turn;
	senderB->Enabled=false;
	if (turn == 'X')
	{
		turn ='O';

	}else  turn = 'X';

	if (Label6->Caption == '1')
	{
		Label6->Caption = '2';

	}else  Label6->Caption = '1';



bool message = false;
if (Button1->Caption==Button2->Caption && Button2->Caption==Button3->Caption && Button2->Enabled==false)
{

	Application->Title="����� ����!";
	message=true;
	if (Button2->Caption=='X')
	{
			check='X';
	}else check='O';
	ShowMessage("�������� " + Button2->Caption);
	Button1->Enabled=true;     Button1->Caption="";
	Button2->Enabled=true;     Button2->Caption="";
	Button3->Enabled=true;     Button3->Caption="";
	Button4->Enabled=true;     Button4->Caption="";
	Button5->Enabled=true;     Button5->Caption="";
	Button6->Enabled=true;     Button6->Caption="";
	Button7->Enabled=true;     Button7->Caption="";
	Button8->Enabled=true;     Button8->Caption="";
	Button9->Enabled=true;     Button9->Caption="";
}
if (Button4->Caption==Button5->Caption && Button5->Caption==Button6->Caption && Button5->Enabled==false)
{
	Application->Title="����� ����!";
	message=true;
	if (Button5->Caption=='X')
	{
			check='X';
	}else check='O';
	ShowMessage("�������� " + Button5->Caption);
    Button1->Enabled=true;     Button1->Caption="";
	Button2->Enabled=true;     Button2->Caption="";
	Button3->Enabled=true;     Button3->Caption="";
	Button4->Enabled=true;     Button4->Caption="";
	Button5->Enabled=true;     Button5->Caption="";
	Button6->Enabled=true;     Button6->Caption="";
	Button7->Enabled=true;     Button7->Caption="";
	Button8->Enabled=true;     Button8->Caption="";
	Button9->Enabled=true;     Button9->Caption="";
}
if (Button7->Caption==Button8->Caption && Button8->Caption==Button9->Caption && Button8->Enabled==false)
{
	Application->Title="����� ����!";
	message=true;
	if (Button8->Caption=='X')
	{
			check='X';
	}else check='O';
	ShowMessage("�������� " + Button8->Caption);
    Button1->Enabled=true;     Button1->Caption="";
	Button2->Enabled=true;     Button2->Caption="";
	Button3->Enabled=true;     Button3->Caption="";
	Button4->Enabled=true;     Button4->Caption="";
	Button5->Enabled=true;     Button5->Caption="";
	Button6->Enabled=true;     Button6->Caption="";
	Button7->Enabled=true;     Button7->Caption="";
	Button8->Enabled=true;     Button8->Caption="";
	Button9->Enabled=true;     Button9->Caption="";
}
if (Button1->Caption==Button4->Caption && Button4->Caption==Button7->Caption && Button4->Enabled==false)
{
	Application->Title="����� ����!";
	message=true;
	if (Button4->Caption=='X')
	{
			check='X';
	}else check='O';
	ShowMessage("�������� " + Button4->Caption);
	Button1->Enabled=true;     Button1->Caption="";
	Button2->Enabled=true;     Button2->Caption="";
	Button3->Enabled=true;     Button3->Caption="";
	Button4->Enabled=true;     Button4->Caption="";
	Button5->Enabled=true;     Button5->Caption="";
	Button6->Enabled=true;     Button6->Caption="";
	Button7->Enabled=true;     Button7->Caption="";
	Button8->Enabled=true;     Button8->Caption="";
	Button9->Enabled=true;     Button9->Caption="";
}
if (Button2->Caption==Button5->Caption && Button5->Caption==Button8->Caption && Button5->Enabled==false)
{
	Application->Title="����� ����!";
	message=true;
	if (Button5->Caption=='X')
	{
			check='X';
	}else check='O';
	ShowMessage("�������� " + Button5->Caption);
	Button1->Enabled=true;     Button1->Caption="";
	Button2->Enabled=true;     Button2->Caption="";
	Button3->Enabled=true;     Button3->Caption="";
	Button4->Enabled=true;     Button4->Caption="";
	Button5->Enabled=true;     Button5->Caption="";
	Button6->Enabled=true;     Button6->Caption="";
	Button7->Enabled=true;     Button7->Caption="";
	Button8->Enabled=true;     Button8->Caption="";
	Button9->Enabled=true;     Button9->Caption="";
}
if (Button3->Caption==Button6->Caption && Button9->Caption==Button3->Caption && Button6->Enabled==false)
{
	Application->Title="����� ����!";
	message=true;
	if (Button6->Caption=='X')
	{
			check='X';
	}else check='O';
	ShowMessage("�������� " + Button6->Caption);
	Button1->Enabled=true;     Button1->Caption="";
	Button2->Enabled=true;     Button2->Caption="";
	Button3->Enabled=true;     Button3->Caption="";
	Button4->Enabled=true;     Button4->Caption="";
	Button5->Enabled=true;     Button5->Caption="";
	Button6->Enabled=true;     Button6->Caption="";
	Button7->Enabled=true;     Button7->Caption="";
	Button8->Enabled=true;     Button8->Caption="";
	Button9->Enabled=true;     Button9->Caption="";
}
if (Button1->Caption==Button5->Caption && Button5->Caption==Button9->Caption && Button5->Enabled==false)
{
	Application->Title="����� ����!";
	message=true;
	if (Button5->Caption=='X')
	{
			check='X';
	}else check='O';
	ShowMessage("�������� " + Button5->Caption);
Button1->Enabled=true;     Button1->Caption="";
	Button2->Enabled=true;     Button2->Caption="";
	Button3->Enabled=true;     Button3->Caption="";
	Button4->Enabled=true;     Button4->Caption="";
	Button5->Enabled=true;     Button5->Caption="";
	Button6->Enabled=true;     Button6->Caption="";
	Button7->Enabled=true;     Button7->Caption="";
	Button8->Enabled=true;     Button8->Caption="";
	Button9->Enabled=true;     Button9->Caption="";
}
if (Button3->Caption==Button5->Caption && Button5->Caption==Button7->Caption && Button5->Enabled==false)
{
	message=true;
	if (Button5->Caption=='X')
	{
			check='X';
	}else check='O';
	Application->Title="����� ����!";
	ShowMessage("�������� " + Button5->Caption);
	Button1->Enabled=true;     Button1->Caption="";
	Button2->Enabled=true;     Button2->Caption="";
	Button3->Enabled=true;     Button3->Caption="";
	Button4->Enabled=true;     Button4->Caption="";
	Button5->Enabled=true;     Button5->Caption="";
	Button6->Enabled=true;     Button6->Caption="";
	Button7->Enabled=true;     Button7->Caption="";
	Button8->Enabled=true;     Button8->Caption="";
	Button9->Enabled=true;     Button9->Caption="";
}

if (message==false && Button1->Enabled==false && Button2->Enabled==false && Button3->Enabled==false && Button4->Enabled==false && Button5->Enabled==false && Button6->Enabled==false && Button7->Enabled==false && Button8->Enabled==false && Button9->Enabled==false)
{
	message=true;
	check='N';
	Application->Title="����� ����!";
	ShowMessage("�����");
	Button1->Enabled=true;     Button1->Caption="";
	Button2->Enabled=true;     Button2->Caption="";
	Button3->Enabled=true;     Button3->Caption="";
	Button4->Enabled=true;     Button4->Caption="";
	Button5->Enabled=true;     Button5->Caption="";
	Button6->Enabled=true;     Button6->Caption="";
	Button7->Enabled=true;     Button7->Caption="";
	Button8->Enabled=true;     Button8->Caption="";
	Button9->Enabled=true;     Button9->Caption="";
}
	if (check=='X')
	{
		wp1=wp1+1;
		Label2->Caption=wp1;
		check=0;
	}
	else if (check=='O')
	{
		wp2=wp2+1;
		Label4->Caption=wp2;
		check=0;
	}

}
//������ �����-------------------------------------------------------------
void __fastcall TForm3::Button10Click(TObject *Sender)
{
	 Form1->Show();
	 Close();
	Button1->Enabled=true;     Button1->Caption="";
	Button2->Enabled=true;     Button2->Caption="";
	Button3->Enabled=true;     Button3->Caption="";
	Button4->Enabled=true;     Button4->Caption="";
	Button5->Enabled=true;     Button5->Caption="";
	Button6->Enabled=true;     Button6->Caption="";
	Button7->Enabled=true;     Button7->Caption="";
	Button8->Enabled=true;     Button8->Caption="";
	Button9->Enabled=true;     Button9->Caption="";
	Label2->Caption="0";        Label4->Caption="0";
}
//������ � ���������---------------------------------------------------------
void __fastcall TForm3::N8Click(TObject *Sender)
{
	AboutBox->Show();
}
//������ �������----------------------------------------------------------
void __fastcall TForm3::N6Click(TObject *Sender)
{
	Form5->Show();
}
//������ �������-------------------------------------------------------------
void __fastcall TForm3::N7Click(TObject *Sender)
{
	// ������� ������ ���� TLabel �� ����� �����
	TLabel* labels[] = { PagesDlg->Label1, PagesDlg->Label2, PagesDlg->Label3, PagesDlg->Label4, PagesDlg->Label5, PagesDlg->Label6, PagesDlg->Label7, PagesDlg->Label8, PagesDlg->Label9, PagesDlg->Label10, PagesDlg->Label11, PagesDlg->Label12, PagesDlg->Label13, PagesDlg->Label14 }; // ������ �������, �� �����

	// ��������� ���� � ������ ������ ����� �� �������
	ifstream infile("information.txt");
	string str;
	int i = 0; // ��������� ������ ������� labels

	while (getline(infile, str) && (i < 14)) { // ������������ ���-�� ����� 14
		labels[i]->Caption = UnicodeString(str.c_str());
		i++;
	}

	infile.close(); // ��������� ����

	PagesDlg->Show();
}
//������ ������� ���� --------------------------------------------------------------------
void __fastcall TForm3::N2Click(TObject *Sender)
{
	 Form3->Color=clSilver;
	 Label1->Font->Color=clWindowText;
	 Label2->Font->Color=clWindowText;
	 Label3->Font->Color=clWindowText;
	 Label4->Font->Color=clWindowText;
	 Label5->Font->Color=clWindowText;
	 Label6->Font->Color=clWindowText;
	 N2->Enabled=false;
	 N3->Enabled=true;
	 N4->Enabled=true;
}
//������ ������� ����--------------------------------------------------------
void __fastcall TForm3::N3Click(TObject *Sender)
{
	 Form3->Color = clTeal;
	 Label1->Font->Color=clCream;
	 Label2->Font->Color=clCream;
	 Label3->Font->Color=clCream;
	 Label4->Font->Color=clCream;
	 Label5->Font->Color=clCream;
	 Label6->Font->Color=clCream;
	 N2->Enabled=true;
	 N3->Enabled=false;
	 N4->Enabled=true;
}
////������ ����� ����--------------------------------------------------------
void __fastcall TForm3::N4Click(TObject *Sender)
{
	 Form3->Color = clHotLight;
	 Label1->Font->Color=clCream;
	 Label2->Font->Color=clCream;
	 Label3->Font->Color=clCream;
	 Label4->Font->Color=clCream;
	 Label5->Font->Color=clCream;
	 Label6->Font->Color=clCream;
	 N2->Enabled=true;
	 N3->Enabled=true;
	 N4->Enabled=false;
}


