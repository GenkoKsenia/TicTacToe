//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include "Unit1.h"
#include "Unit2.h"
#include "Unit5.h"
#include "ABOUT.h"
#include "TABPGDLG.h"
#include "Unit4.cpp"
#include <stdio.h>
#include <string.h>
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"

TForm2 *Form2;
//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
char tplayer='X';
char tbot='O';
int level=0;
//Выбор игры за Х-----------------------------------------------------------
void __fastcall TForm2::X1Click(TObject *Sender)
{
	   tplayer = 'X';
	   tbot = 'O';
	   X1->Enabled=false;
	   X2->Enabled=true;
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
//Выбор игры за О----------------------------------------------------------
void __fastcall TForm2::X2Click(TObject *Sender)
{
	   tplayer = 'O';
	   tbot = 'X';
	   X2->Enabled=false;
	   X1->Enabled=true;
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
//Выбор Уровня игры 1-------------------------------------------------------
void __fastcall TForm2::N2Click(TObject *Sender)
{
	   level=1;
	   N2->Enabled=false;
	   N3->Enabled=true;
	   N4->Enabled=true;
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
//Выбор Уровня игры 2------------------------------------------------------
void __fastcall TForm2::N3Click(TObject *Sender)
{
	   level=2;
	   N3->Enabled=false;
	   N2->Enabled=true;
	   N4->Enabled=true;
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
//Выбор Уровня игры 3------------------------------------------------------
void __fastcall TForm2::N4Click(TObject *Sender)
{
		level=3;
		N4->Enabled=false;
		N3->Enabled=true;
		N2->Enabled=true;
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
//Нажатие на кнопку поля игры--------------------------------------------
void __fastcall TForm2::Button_Click(TObject *Sender)
{
TButton *senderB = (TButton*)Sender;
senderB->Caption=tplayer;
senderB->Enabled=false;

bool winp=0;
bool message = false;
if (Button1->Caption==Button2->Caption && Button2->Caption==Button3->Caption && Button2->Enabled==false)
{

	Application->Title="Конец игры!";
	message=true;
	ShowMessage("Победили " + Button2->Caption);
	if (Button2->Caption==tplayer) {
		 winp=1;
	}

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
	Application->Title="Конец игры!";
	message=true;
	ShowMessage("Победили " + Button5->Caption);
	if (Button5->Caption==tplayer) {
		 winp=1;
	}

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
	Application->Title="Конец игры!";
	message=true;
	ShowMessage("Победили " + Button8->Caption);
	if (Button8->Caption==tplayer) {
		 winp=1;
	}

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
	Application->Title="Конец игры!";
	message=true;
	ShowMessage("Победили " + Button4->Caption);
	if (Button4->Caption==tplayer) {
		 winp=1;
	}

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
	Application->Title="Конец игры!";
	message=true;
	ShowMessage("Победили " + Button5->Caption);
	if (Button5->Caption==tplayer) {
		 winp=1;
	}

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
	Application->Title="Конец игры!";
	message=true;
	ShowMessage("Победили " + Button6->Caption);
	if (Button6->Caption==tplayer) {
		 winp=1;
	}

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
	Application->Title="Конец игры!";
	message=true;
	ShowMessage("Победили " + Button5->Caption);
	Button1->Enabled=true;     Button1->Caption="";
	if (Button5->Caption==tplayer) {
		 winp=1;
	}

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
	Application->Title="Конец игры!";
	ShowMessage("Победили " + Button5->Caption);
	if (Button5->Caption==tplayer) {
		 winp=1;
	}

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
	Application->Title="Конец игры!";
	ShowMessage("Ничья");
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
srand(time(NULL));

bool xodbot=false;
//если есть выигрышный ход
if ((level==2) || (level==3))
{
if (Button1->Caption==tbot && Button4->Caption==tbot && Button7->Enabled==true && xodbot!=true && message!=true)
{
   Button7->Caption=tbot;
   Button7->Enabled=false;
   xodbot=true;
}
else if (Button2->Caption==tbot && Button5->Caption==tbot && Button8->Enabled==true && xodbot!=true && message!=true)
{
   Button8->Caption=tbot;
   Button8->Enabled=false;
   xodbot=true;
}
else if (Button3->Caption==tbot && Button6->Caption==tbot && Button9->Enabled==true && xodbot!=true && message!=true)
{
   Button9->Caption=tbot;
   Button9->Enabled=false;
   xodbot=true;
}
else if (Button4->Caption==tbot && Button7->Caption==tbot && Button1->Enabled==true && xodbot!=true && message!=true)
{
   Button1->Caption=tbot;
   Button1->Enabled=false;
   xodbot=true;
}
else if (Button5->Caption==tbot && Button8->Caption==tbot && Button2->Enabled==true && xodbot!=true && message!=true)
{
   Button2->Caption=tbot;
   Button2->Enabled=false;
   xodbot=true;
}
else if (Button6->Caption==tbot && Button9->Caption==tbot && Button3->Enabled==true && xodbot!=true && message!=true)
{
   Button3->Caption=tbot;
   Button3->Enabled=false;
   xodbot=true;
}
else if (Button1->Caption==tbot && Button7->Caption==tbot && Button4->Enabled==true && xodbot!=true && message!=true)
{
   Button4->Caption=tbot;
   Button4->Enabled=false;
   xodbot=true;
}
else if (Button2->Caption==tbot && Button8->Caption==tbot && Button5->Enabled==true && xodbot!=true && message!=true)
{
   Button5->Caption=tbot;
   Button5->Enabled=false;
   xodbot=true;
}
else if (Button3->Caption==tbot && Button9->Caption==tbot && Button6->Enabled==true && xodbot!=true && message!=true)
{
   Button6->Caption=tbot;
   Button6->Enabled=false;
   xodbot=true;
}
else if (Button1->Caption==tbot && Button2->Caption==tbot && Button3->Enabled==true && xodbot!=true && message!=true)
{
   Button3->Caption=tbot;
   Button3->Enabled=false;
   xodbot=true;
}
else if (Button4->Caption==tbot && Button5->Caption==tbot && Button6->Enabled==true && xodbot!=true && message!=true)
{
   Button6->Caption=tbot;
   Button6->Enabled=false;
   xodbot=true;
}
else if (Button7->Caption==tbot && Button8->Caption==tbot && Button9->Enabled==true && xodbot!=true && message!=true)
{
   Button9->Caption=tbot;
   Button9->Enabled=false;
   xodbot=true;
}
else if (Button1->Caption==tbot && Button3->Caption==tbot && Button2->Enabled==true && xodbot!=true && message!=true)
{
   Button2->Caption=tbot;
   Button2->Enabled=false;
   xodbot=true;
}
else if (Button4->Caption==tbot && Button6->Caption==tbot && Button5->Enabled==true && xodbot!=true && message!=true)
{
   Button5->Caption=tbot;
   Button5->Enabled=false;
   xodbot=true;
}
else if (Button7->Caption==tbot && Button9->Caption==tbot && Button8->Enabled==true && xodbot!=true && message!=true)
{
   Button8->Caption=tbot;
   Button8->Enabled=false;
   xodbot=true;
}
else if (Button1->Caption==tbot && Button5->Caption==tbot && Button9->Enabled==true && xodbot!=true && message!=true)
{
   Button9->Caption=tbot;
   Button9->Enabled=false;
   xodbot=true;
}
else if (Button5->Caption==tbot && Button9->Caption==tbot && Button1->Enabled==true && xodbot!=true && message!=true)
{
   Button1->Caption=tbot;
   Button1->Enabled=false;
   xodbot=true;
}
else if (Button1->Caption==tbot && Button9->Caption==tbot && Button5->Enabled==true && xodbot!=true && message!=true)
{
   Button5->Caption=tbot;
   Button5->Enabled=false;
   xodbot=true;
}
else if (Button7->Caption==tbot && Button5->Caption==tbot && Button3->Enabled==true && xodbot!=true && message!=true)
{
   Button3->Caption=tbot;
   Button3->Enabled=false;
   xodbot=true;
}
else if (Button5->Caption==tbot && Button3->Caption==tbot && Button7->Enabled==true && xodbot!=true && message!=true)
{
   Button7->Caption=tbot;
   Button7->Enabled=false;
   xodbot=true;
}
else if (Button7->Caption==tbot && Button3->Caption==tbot && Button5->Enabled==true && xodbot!=true && message!=true)
{
   Button5->Caption=tbot;
   Button5->Enabled=false;
   xodbot=true;
}
else if (Button2->Caption==tbot && Button3->Caption==tbot && Button1->Enabled==true && xodbot!=true && message!=true)
{
   Button1->Caption=tbot;
   Button1->Enabled=false;
   xodbot=true;
}
else if (Button5->Caption==tbot && Button6->Caption==tbot && Button4->Enabled==true && xodbot!=true && message!=true)
{
   Button4->Caption=tbot;
   Button4->Enabled=false;
   xodbot=true;
}
else if (Button8->Caption==tbot && Button9->Caption==tbot && Button7->Enabled==true && xodbot!=true && message!=true)
{
   Button7->Caption=tbot;
   Button7->Enabled=false;
   xodbot=true;
}
}

//если выигрышного хода нет, но есть выигрышный ход у игрока
if (level==3)
{

if (Button1->Caption==tplayer && Button4->Caption==tplayer && Button7->Enabled==true && xodbot!=true && message!=true)
{
   Button7->Caption=tbot;
   Button7->Enabled=false;
   xodbot=true;
}
else if (Button2->Caption==tplayer && Button5->Caption==tplayer && Button8->Enabled==true && xodbot!=true && message!=true)
{
   Button8->Caption=tbot;
   Button8->Enabled=false;
   xodbot=true;
}
else if (Button3->Caption==tplayer && Button6->Caption==tplayer && Button9->Enabled==true && xodbot!=true && message!=true)
{
   Button9->Caption=tbot;
   Button9->Enabled=false;
   xodbot=true;
}
else if (Button4->Caption==tplayer && Button7->Caption==tplayer && Button1->Enabled==true && xodbot!=true && message!=true)
{
   Button1->Caption=tbot;
   Button1->Enabled=false;
   xodbot=true;
}
else if (Button5->Caption==tplayer && Button8->Caption==tplayer && Button2->Enabled==true && xodbot!=true && message!=true)
{
   Button2->Caption=tbot;
   Button2->Enabled=false;
   xodbot=true;
}
else if (Button6->Caption==tplayer && Button9->Caption==tplayer && Button3->Enabled==true && xodbot!=true && message!=true)
{
   Button3->Caption=tbot;
   Button3->Enabled=false;
   xodbot=true;
}
else if (Button1->Caption==tplayer && Button7->Caption==tplayer && Button4->Enabled==true && xodbot!=true && message!=true)
{
   Button4->Caption=tbot;
   Button4->Enabled=false;
   xodbot=true;
}
else if (Button2->Caption==tplayer && Button8->Caption==tplayer && Button5->Enabled==true && xodbot!=true && message!=true)
{
   Button5->Caption=tbot;
   Button5->Enabled=false;
   xodbot=true;
}
else if (Button3->Caption==tplayer && Button9->Caption==tplayer && Button6->Enabled==true && xodbot!=true && message!=true)
{
   Button6->Caption=tbot;
   Button6->Enabled=false;
   xodbot=true;
}
else if (Button1->Caption==tplayer && Button2->Caption==tplayer && Button3->Enabled==true && xodbot!=true && message!=true)
{
   Button3->Caption=tbot;
   Button3->Enabled=false;
   xodbot=true;
}
else if (Button4->Caption==tplayer && Button5->Caption==tplayer && Button6->Enabled==true && xodbot!=true && message!=true)
{
   Button6->Caption=tbot;
   Button6->Enabled=false;
   xodbot=true;
}
else if (Button7->Caption==tplayer && Button8->Caption==tplayer && Button9->Enabled==true && xodbot!=true && message!=true)
{
   Button9->Caption=tbot;
   Button9->Enabled=false;
   xodbot=true;
}
else if (Button1->Caption==tplayer && Button3->Caption==tplayer && Button2->Enabled==true && xodbot!=true && message!=true)
{
   Button2->Caption=tbot;
   Button2->Enabled=false;
   xodbot=true;
}
else if (Button4->Caption==tplayer && Button6->Caption==tplayer && Button5->Enabled==true && xodbot!=true && message!=true)
{
   Button5->Caption=tbot;
   Button5->Enabled=false;
   xodbot=true;
}
else if (Button7->Caption==tplayer && Button9->Caption==tplayer && Button8->Enabled==true && xodbot!=true && message!=true)
{
   Button8->Caption=tbot;
   Button8->Enabled=false;
   xodbot=true;
}
else if (Button1->Caption==tplayer && Button5->Caption==tplayer && Button9->Enabled==true && xodbot!=true && message!=true)
{
   Button9->Caption=tbot;
   Button9->Enabled=false;
   xodbot=true;
}
else if (Button5->Caption==tplayer && Button9->Caption==tplayer && Button1->Enabled==true && xodbot!=true && message!=true)
{
   Button1->Caption=tbot;
   Button1->Enabled=false;
   xodbot=true;
}
else if (Button1->Caption==tplayer && Button9->Caption==tplayer && Button5->Enabled==true && xodbot!=true && message!=true)
{
   Button5->Caption=tbot;
   Button5->Enabled=false;
   xodbot=true;
}
else if (Button7->Caption==tplayer && Button5->Caption==tplayer && Button3->Enabled==true && xodbot!=true && message!=true)
{
   Button3->Caption=tbot;
   Button3->Enabled=false;
   xodbot=true;
}
else if (Button5->Caption==tplayer && Button3->Caption==tplayer && Button7->Enabled==true && xodbot!=true && message!=true)
{
   Button7->Caption=tbot;
   Button7->Enabled=false;
   xodbot=true;
}
else if (Button7->Caption==tplayer && Button3->Caption==tplayer && Button5->Enabled==true && xodbot!=true && message!=true)
{
   Button5->Caption=tbot;
   Button5->Enabled=false;
   xodbot=true;
}
else if (Button2->Caption==tplayer && Button3->Caption==tplayer && Button1->Enabled==true && xodbot!=true && message!=true)
{
   Button1->Caption=tbot;
   Button1->Enabled=false;
   xodbot=true;
}
else if (Button5->Caption==tplayer && Button6->Caption==tplayer && Button4->Enabled==true && xodbot!=true && message!=true)
{
   Button4->Caption=tbot;
   Button4->Enabled=false;
   xodbot=true;
}
else if (Button8->Caption==tplayer && Button9->Caption==tplayer && Button7->Enabled==true && xodbot!=true && message!=true)
{
   Button7->Caption=tbot;
   Button7->Enabled=false;
   xodbot=true;
}
}

//если нет ни выигрышного хода, ни выигрышного хода игрока
if (message!=true)
{
while (xodbot!=true && (Button1->Enabled==true || Button2->Enabled==true || Button3->Enabled==true || Button4->Enabled==true || Button5->Enabled==true || Button6->Enabled==true || Button7->Enabled==true || Button8->Enabled==true || Button9->Enabled==true))
{
int bot;
bot=rand()%9 +1;
if (bot==1 && Button1->Enabled==true)
{Button1->Caption=tbot;
Button1->Enabled=false;
xodbot=true;}
if (bot==2 && Button2->Enabled==true)
{Button2->Caption=tbot;
Button2->Enabled=false;
xodbot=true;}
if (bot==3 && Button3->Enabled==true)
{Button3->Caption=tbot;
Button3->Enabled=false;
xodbot=true;}
if (bot==4 && Button4->Enabled==true)
{Button4->Caption=tbot;
Button4->Enabled=false;
xodbot=true;}
if (bot==5 && Button5->Enabled==true)
{Button5->Caption=tbot;
Button5->Enabled=false;
xodbot=true;}
if (bot==6 && Button6->Enabled==true)
{Button6->Caption=tbot;
Button6->Enabled=false;
xodbot=true;}
if (bot==7 && Button7->Enabled==true)
{Button7->Caption=tbot;
Button7->Enabled=false;
xodbot=true;}
if (bot==8 && Button8->Enabled==true)
{Button8->Caption=tbot;
Button8->Enabled=false;
xodbot=true;}
if (bot==9 && Button9->Enabled==true)
{Button9->Caption=tbot;
Button9->Enabled=false;
xodbot=true;}
}
}

if (Button1->Caption==Button2->Caption && Button2->Caption==Button3->Caption && Button2->Enabled==false && message!=true)
{
	Application->Title="Конец игры!";
	message=true;
	ShowMessage("Победили " + Button2->Caption);
    if (Button2->Caption==tplayer) {
		 winp=1;
	}

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
if (Button4->Caption==Button5->Caption && Button5->Caption==Button6->Caption && Button5->Enabled==false && message!=true)
{
	Application->Title="Конец игры!";
	message=true;
	ShowMessage("Победили " + Button5->Caption);
	if (Button5->Caption==tplayer) {
		 winp=1;
	}
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
if (Button7->Caption==Button8->Caption && Button8->Caption==Button9->Caption && Button8->Enabled==false && message!=true)
{
	Application->Title="Конец игры!";
	message=true;
	ShowMessage("Победили " + Button8->Caption);
	if (Button8->Caption==tplayer) {
		 winp=1;
	}
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
if (Button1->Caption==Button4->Caption && Button4->Caption==Button7->Caption && Button4->Enabled==false && message!=true)
{
	Application->Title="Конец игры!";
	message=true;
	ShowMessage("Победили " + Button4->Caption);
	if (Button4->Caption==tplayer) {
		 winp=1;
	}
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
if (Button2->Caption==Button5->Caption && Button5->Caption==Button8->Caption && Button5->Enabled==false && message!=true)
{
	Application->Title="Конец игры!";
	message=true;
	ShowMessage("Победили " + Button5->Caption);
	if (Button5->Caption==tplayer) {
		 winp=1;
	}
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
if (Button3->Caption==Button6->Caption && Button9->Caption==Button3->Caption && Button6->Enabled==false && message!=true)
{
	Application->Title="Конец игры!";
	message=true;
	ShowMessage("Победили " + Button6->Caption);
	if (Button6->Caption==tplayer) {
		 winp=1;
	}
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
if (Button1->Caption==Button5->Caption && Button5->Caption==Button9->Caption && Button5->Enabled==false && message!=true)
{
	Application->Title="Конец игры!";
	message=true;
	ShowMessage("Победили " + Button5->Caption);
	if (Button5->Caption==tplayer) {
		 winp=1;
	}
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
if (Button3->Caption==Button5->Caption && Button5->Caption==Button7->Caption && Button5->Enabled==false && message!=true)
{
	message=true;
	Application->Title="Конец игры!";
	ShowMessage("Победили " + Button5->Caption);
	if (Button5->Caption==tplayer) {
		 winp=1;
	}
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
	Application->Title="Конец игры!";
	ShowMessage("Ничья");
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
if (message==true) {
	int game = StrToInt(Label4->Caption);
	game=game+1;
	Label4->Caption = game;

	if (winp==1) {
	int win = StrToInt(Label6->Caption);
	win=win+1;
	Label6->Caption = win;
	}

}
}
//Кнопка Назад--------------------------------------------------------------
void __fastcall TForm2::Button10Click(TObject *Sender)
{
    int MessageBox(
   HWND   hWnd,
   LPCTSTR lpText,
   LPCTSTR lpCaption,
   UINT   uType
   );

	FILE* file_ptr;
	UserInfo newuser; // структура для чтения из файла

	// открываем бинарный файл в режиме чтения
	file_ptr = fopen("users.bin", "rb+");

	// вычисляем размер структуры
	size_t struct_size = sizeof(struct UserInfo);

	// читаем структуры из файла, пока не найдем нужную
	while (fread(&newuser, struct_size, 1, file_ptr)) {
		if (newuser.username==Label2->Caption) {
			// перемещаем указатель файла на текущую позицию
			long position = ftell(file_ptr);

			// заменяем значение переменной games
			newuser.games = StrToInt(Label4->Caption);
			newuser.wins = StrToInt(Label6->Caption);


			// записываем структуру обратно в файл
			fseek(file_ptr, position - struct_size, SEEK_SET);
			fwrite(&newuser, struct_size, 1, file_ptr);
			break;
		}
	}

	// закрываем файл
	fclose(file_ptr);

	int result = MessageBox(NULL, L"Сохранить игру?", L"", MB_YESNO);
		if (result == IDYES)
			{
			GameInfo gameInfo;
			AnsiString username = Label2->Caption;
			AnsiString b1 = Button1->Caption;
			AnsiString b2 = Button2->Caption;
			AnsiString b3 = Button3->Caption;
			AnsiString b4 = Button4->Caption;
			AnsiString b5 = Button5->Caption;
			AnsiString b6 = Button6->Caption;
			AnsiString b7 = Button7->Caption;
			AnsiString b8 = Button8->Caption;
			AnsiString b9 = Button9->Caption;

			// конвертируем значения в тип char*
			strcpy(gameInfo.username, username.c_str());
			strcpy(gameInfo.b1, b1.c_str());
			strcpy(gameInfo.b2, b2.c_str());
			strcpy(gameInfo.b3, b3.c_str());
			strcpy(gameInfo.b4, b4.c_str());
			strcpy(gameInfo.b5, b5.c_str());
			strcpy(gameInfo.b6, b6.c_str());
			strcpy(gameInfo.b7, b7.c_str());
			strcpy(gameInfo.b8, b8.c_str());
			strcpy(gameInfo.b9, b9.c_str());
			gameInfo.usage=false;


			// открываем файл в режиме добавления данных
			ofstream outfile("usersgame.bin", std::ios::binary | std::ios::app);


			// проверяем, успешно ли открыт файл
			if (outfile.is_open()) {

				// записываем объект структуры в файл
				outfile.write((char*)&gameInfo, sizeof(GameInfo));

				// закрываем файл
				outfile.close();
			}else{
			Application->Title="Ошибка";
			ShowMessage("Файл не найден");}
			}

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

}
//Кнопка Задание------------------------------------------------------------
void __fastcall TForm2::N6Click(TObject *Sender)
{
	Form5->Show();
}
//Кнопка О программе---------------------------------------------------------
void __fastcall TForm2::N8Click(TObject *Sender)
{
	 AboutBox->Show();
}
//Кнопка Справка-------------------------------------------------------------
void __fastcall TForm2::N7Click(TObject *Sender)
{
	// создаем массив всех TLabel на нашей форме
	TLabel* labels[] = { PagesDlg->Label1, PagesDlg->Label2, PagesDlg->Label3, PagesDlg->Label4, PagesDlg->Label5, PagesDlg->Label6, PagesDlg->Label7, PagesDlg->Label8, PagesDlg->Label9, PagesDlg->Label10, PagesDlg->Label11, PagesDlg->Label12, PagesDlg->Label13, PagesDlg->Label14 }; // массив лейблов, на форме

	// открываем файл и читаем строки файла по очереди
	ifstream infile("information.txt");
	string str;
	int i = 0; // начальный индекс массива labels

	while (getline(infile, str) && (i < 14)) { // ограничиваем кол-во строк 14
		labels[i]->Caption = UnicodeString(str.c_str());
		i++;
	}

	infile.close(); // закрываем файл

	PagesDlg->Show();
}
//Кнопка Пауза---------------------------------------------------------------
void __fastcall TForm2::Button11Click(TObject *Sender)
{
	 Application->Title="Пауза";
	 ShowMessage("Игра приостановлена");
}
//Кнопка Светлая тема -------------------------------------------------------
void __fastcall TForm2::N10Click(TObject *Sender)
{
	 Form2->Color=clSilver;
	 Label1->Font->Color=clWindowText;
	 Label2->Font->Color=clWindowText;
	 Label3->Font->Color=clWindowText;
	 Label4->Font->Color=clWindowText;
	 Label5->Font->Color=clWindowText;
	 Label6->Font->Color=clWindowText;
	 N10->Enabled=false;
	 N11->Enabled=true;
	 N12->Enabled=true;
}
//Кнопка Зеленая тема-------------------------------------------------------

void __fastcall TForm2::N11Click(TObject *Sender)
{
	 Form2->Color = clTeal;
	 Label1->Font->Color=clCream;
	 Label2->Font->Color=clCream;
	 Label3->Font->Color=clCream;
	 Label4->Font->Color=clCream;
	 Label5->Font->Color=clCream;
	 Label6->Font->Color=clCream;
	 N10->Enabled=true;
	 N11->Enabled=false;
	 N12->Enabled=true;
}
//Кнопка Синяя тема---------------------------------------------------------
void __fastcall TForm2::N12Click(TObject *Sender)
{
	 Form2->Color = clHotLight;
	 Label1->Font->Color=clCream;
	 Label2->Font->Color=clCream;
	 Label3->Font->Color=clCream;
	 Label4->Font->Color=clCream;
	 Label5->Font->Color=clCream;
	 Label6->Font->Color=clCream;
	 N10->Enabled=true;
	 N11->Enabled=true;
	 N12->Enabled=false;
}


