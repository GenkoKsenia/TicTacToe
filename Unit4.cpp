#include <vcl.h>
#pragma hdrstop
#include "Unit4.h"
#include "Unit2.h"
#include "Unit1.h"
#include <fstream>
#include <iostream>
#include <cstring>
#include <Windows.h>
using namespace std;

//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm4 *Form4;
//---------------------------------------------------------------------------
__fastcall TForm4::TForm4(TComponent* Owner)
	: TForm(Owner)
{
}
//����������� ������� �� Edit1 � Edit2 ��� ������� enter---------------------
void __fastcall TForm4::Edit1KeyDown(TObject *Sender, WORD &Key, TShiftState Shift)
{
	 if(Key == VK_RETURN) Edit2->SetFocus();
	 char f;
}
//������ �����---------------------------------------------------------------
void __fastcall TForm4::Button3Click(TObject *Sender)
{
	  Edit1->Clear();
	  Edit2->Clear();
	  Close();
}
//��������� ��� ���������� ��� ������----------------------------------------
 struct UserInfo {
	char username[30];
	char password[30];
	int games;
	int wins;
}userInfo = {"u", "p", 0, 0};
//��������� ��� ���������� ��� ����������� ����-----------------------
struct GameInfo {
	char username[30];
	char b1[2];
	char b2[2];
	char b3[2];
	char b4[2];
	char b5[2];
	char b6[2];
	char b7[2];
	char b8[2];
	char b9[2];
	bool usage;
};
//������ ������� �������-----------------------------------------------------
void __fastcall TForm4::Button2Click(TObject *Sender)
{
//��������� �������� �� Edit1 � Edit2
if ((Edit1->Text!="")&&(Edit2->Text!="")) {
	AnsiString username = Edit1->Text;
	AnsiString password = Edit2->Text;

	// ������������ �������� � ��� char*
	strcpy(userInfo.username, username.c_str());
	strcpy(userInfo.password, password.c_str());

	// ��������� ���� � ������ ���������� ������
	ofstream outfile("users.bin", std::ios::binary | std::ios::app);

	// ���������, ������� �� ������ ����
	if (outfile.is_open()) {

	// ���������� ������ ��������� � ����
	outfile.write((char*)&userInfo, sizeof(UserInfo));

	// ��������� ����
	outfile.close();
	Edit1->Text="";
	Edit2->Text="";
	Close();
}else{
  Application->Title="������";
  ShowMessage("���� �� ������");}

}else{Application->Title="������";
  ShowMessage("������� ��� � ������");}
}
//������ �����-------------------------------------------------------------
void __fastcall TForm4::Button1Click(TObject *Sender)
{
  ifstream fileu("users.bin", ios::binary);

  int MessageBox(
   HWND   hWnd,
   LPCTSTR lpText,
   LPCTSTR lpCaption,
   UINT   uType
);
  if (fileu.is_open()) {
	UserInfo userinfo;
	bool search=0;
	while (fileu.read((char*)&userinfo, sizeof(UserInfo))) {

	  if ((userinfo.username==Edit1->Text) && (userinfo.password==Edit2->Text)) {
		search=1;

		//fstream fileg("usersgame.bin", ios::in | ios::out | ios::binary);
		FILE* file_ptr;
		file_ptr = fopen("usersgame.bin", "rb+");
		if (file_ptr != NULL) {
			GameInfo gameinfo;
            // ��������� ������ ���������
			size_t struct_size = sizeof(struct GameInfo);
			while (fread(&gameinfo, struct_size, 1, file_ptr)) {
				 if ((gameinfo.usage==false)&&(gameinfo.username==Edit1->Text)) {
					int result = MessageBox(NULL, L"���������� ����������� ����?", L"", MB_YESNO);
					if (result == IDYES)
						{
						 Form2->Button1->Caption=gameinfo.b1;
						 if ((Form2->Button1->Caption=="X")||(Form2->Button1->Caption=="O")) {
							 Form2->Button1->Enabled=false;
						 }
						 Form2->Button2->Caption=gameinfo.b2;
						 if ((Form2->Button2->Caption=="X")||(Form2->Button2->Caption=="O")) {
							 Form2->Button2->Enabled=false;
						 }
						 Form2->Button3->Caption=gameinfo.b3;
						 if ((Form2->Button3->Caption=="X")||(Form2->Button3->Caption=="O")) {
							 Form2->Button3->Enabled=false;
						 }
						 Form2->Button4->Caption=gameinfo.b4;
						 if ((Form2->Button4->Caption=="X")||(Form2->Button4->Caption=="O")) {
							 Form2->Button4->Enabled=false;
						 }
						 Form2->Button5->Caption=gameinfo.b5;
						 if ((Form2->Button5->Caption=="X")||(Form2->Button5->Caption=="O")) {
							 Form2->Button5->Enabled=false;
						 }
						 Form2->Button6->Caption=gameinfo.b6;
						 if ((Form2->Button6->Caption=="X")||(Form2->Button6->Caption=="O")) {
							 Form2->Button6->Enabled=false;
						 }
						 Form2->Button7->Caption=gameinfo.b7;
						 if ((Form2->Button7->Caption=="X")||(Form2->Button7->Caption=="O")) {
							 Form2->Button7->Enabled=false;
						 }
						 Form2->Button8->Caption=gameinfo.b8;
						 if ((Form2->Button8->Caption=="X")||(Form2->Button8->Caption=="O")) {
							 Form2->Button8->Enabled=false;
						 }
						 Form2->Button9->Caption=gameinfo.b9;
						 if ((Form2->Button9->Caption=="X")||(Form2->Button9->Caption=="O")) {
							 Form2->Button9->Enabled=false;
						 }


						 // ���������� ��������� ����� �� ������� �������
						 long position = ftell(file_ptr);
						gameinfo.usage = true;
						// ���������� ��������� ������� � ����
						fseek(file_ptr, position - struct_size, SEEK_SET);
						fwrite(&gameinfo, struct_size, 1, file_ptr);
						break;
						}
                        else
						{
							// ������� "���"
							// �������� ��� ������ ����������� ����
						}
				 }



			 }
			}else{
			Application->Title="������";
			ShowMessage("���� �� ������");
			}
		fclose(file_ptr);
		Form2->Show();
		Close();
		Form2->Label2->Caption=userinfo.username;
		Form2->Label4->Caption=userinfo.games;
		Form2->Label6->Caption=userinfo.wins;
		break;
	  }


	}
    fileu.close();
	if(search==0){
	Application->Title="������";
	ShowMessage("�������� ����� ��� ������"); }
  }else {
	Application->Title="������";
	ShowMessage("���� �� ������");}

  Edit1->Clear();
  Edit2->Clear();
}


