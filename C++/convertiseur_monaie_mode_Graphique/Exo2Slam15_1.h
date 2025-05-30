//---------------------------------------------------------------------------

#ifndef Exo2Slam15_1H
#define Exo2Slam15_1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Menus.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// Composants gérés par l'EDI
	TLabel *Label1;
	TLabel *Label2;
	TEdit *Edit1;
	TEdit *Edit2;
	TButton *Button1;
	TMainMenu *MainMenu1;
	TMenuItem *devise1;
	TMenuItem *devise2;
	TMenuItem *Yen1;
	TMenuItem *Yen2;
	TMenuItem *FrancCFA1;
	TMenuItem *Sortir1;
	TMenuItem *Sortir2;
	void __fastcall Edit1Change(TObject *Sender);
	void __fastcall Edit2Change(TObject *Sender);
	void __fastcall FrancCFA1Click(TObject *Sender);
	void __fastcall devise2Click(TObject *Sender);
	void __fastcall Yen1Click(TObject *Sender);
	void __fastcall Yen2Click(TObject *Sender);
private:	// Déclarations utilisateur
float valeur;
float taux;
public:		// Déclarations utilisateur
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
