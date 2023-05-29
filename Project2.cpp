//---------------------------------------------------------------------------
#include <time.h>
#include <vcl.h>
#pragma hdrstop
#include <tchar.h>
//---------------------------------------------------------------------------
USEFORM("Unit1.cpp", Form1);
USEFORM("Unit2.cpp", Form2);
USEFORM("Unit3.cpp", Form3);
USEFORM("Unit4.cpp", Form4);
USEFORM("Unit5.cpp", Form5);
USEFORM("c:\program files (x86)\embarcadero\studio\22.0\ObjRepos\EN\Cpp\okcancl2.CPP", OKRightDlg);
USEFORM("ABOUT.cpp", AboutBox);
USEFORM("TABPGDLG.cpp", PagesDlg);
USEFORM("Unit6.cpp", Form6);
//---------------------------------------------------------------------------
int WINAPI _tWinMain(HINSTANCE, HINSTANCE, LPTSTR, int)
{
	try
	{
		Application->Initialize();
		Application->MainFormOnTaskBar = true;
		Application->CreateForm(__classid(TForm1), &Form1);
		Application->CreateForm(__classid(TForm2), &Form2);
		Application->CreateForm(__classid(TForm3), &Form3);
		Application->CreateForm(__classid(TForm4), &Form4);
		Application->CreateForm(__classid(TAboutBox), &AboutBox);
		Application->CreateForm(__classid(TForm5), &Form5);
		Application->CreateForm(__classid(TPagesDlg), &PagesDlg);
		Application->CreateForm(__classid(TForm6), &Form6);
		Application->Run();
	}
	catch (Exception &exception)
	{
		Application->ShowException(&exception);
	}
	catch (...)
	{
		try
		{
			throw Exception("");
		}
		catch (Exception &exception)
		{
			Application->ShowException(&exception);
		}
	}
	return 0;
}
//---------------------------------------------------------------------------
