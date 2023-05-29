//---------------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop
#include "Unit1.h"
#include "Unit2.h"
#include "Unit3.h"
#include "Unit4.h"
#include "Unit4.cpp"
#include "Unit6.h"
#include <fstream>
#include <iostream>
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
int choice;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//������ ���3----------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
 Form6->Show();
 Form6->StringGrid1->Cells[0][0] = "�";        // ��������� ����� �������
 Form6->StringGrid1->Cells[0][1] = "1";
 Form6->StringGrid1->Cells[0][2] = "2";
 Form6->StringGrid1->Cells[0][3] = "3";
 Form6->StringGrid1->Cells[1][0] = "���";
 Form6->StringGrid1->Cells[2][0] = "���";
 Form6->StringGrid1->Cells[3][0] = "�����";

 ifstream filer1("users.bin", ios::binary); // ��������� ���� � ������� ������������� � �������� ������

 if (filer1.is_open()) {   //��������� �������� �����
	UserInfo userrating;
	UserInfo top1; // ������� ��� ���������� ���� UserInfo ��� �������� ���������� � ���� ������ �������������
	top1.games=0;
	top1.wins=0;
	UserInfo top2;
	top2.games=0;
	top2.wins=0;
	UserInfo top3;
	top3.games=0;
	top3.wins=0;
	while (filer1.read((char*)&userrating, sizeof(UserInfo))) {
		 if(userrating.games>=top1.games)  {
			  top1.games=userrating.games;
			  top1.wins=userrating.wins;
			  Form6->StringGrid1->Cells[1][1] = userrating.username;
			  Form6->StringGrid1->Cells[2][1] = userrating.games;
			  Form6->StringGrid1->Cells[3][1] = userrating.wins;
		 }

	}
	filer1.close();
	ifstream filer2("users.bin", ios::binary);
	while (filer2.read((char*)&userrating, sizeof(UserInfo))) {
		 if((userrating.games>=top2.games)&&(userrating.games<top1.games))  {
			  top2.games=userrating.games;
			  top2.wins=userrating.wins;
			  Form6->StringGrid1->Cells[1][2] = userrating.username;
			  Form6->StringGrid1->Cells[2][2] = userrating.games;
			  Form6->StringGrid1->Cells[3][2] = userrating.wins;
		 }

	}
	  filer2.close();
	  ifstream filer3("users.bin", ios::binary);
	while (filer3.read((char*)&userrating, sizeof(UserInfo))) {
		 if((userrating.games>=top3.games)&&(userrating.games<top2.games))  {
			  top3.games=userrating.games;
			  top3.wins=userrating.wins;
			  Form6->StringGrid1->Cells[1][3] = userrating.username;
			  Form6->StringGrid1->Cells[2][3] = userrating.games;
			  Form6->StringGrid1->Cells[3][3] = userrating.wins;
		 }
	}
	filer3.close();
 }else{
		Application->Title="������";
		ShowMessage("���� �� ������");
		}
}
//������ �����---------------------------------------------------------------
void __fastcall TForm1::Button2Click(TObject *Sender)
{
 Form4->Show();
}
//������ ������ � ������-----------------------------------------------------
void __fastcall TForm1::Button3Click(TObject *Sender)
{
 Form3->Show();
}
