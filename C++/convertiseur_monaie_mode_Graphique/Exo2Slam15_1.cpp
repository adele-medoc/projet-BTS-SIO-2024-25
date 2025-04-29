//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Exo2Slam15_1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{   taux = 0.92;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Edit1Change(TObject *Sender)
{
try{
valeur = StrToFloat(Edit1->Text);
valeur = valeur / taux;
Edit2->OnChange=NULL;
Edit2->Text=FloatToStr(valeur);
Edit2->OnChange=Edit2Change;
}

catch(...){
    if (Edit1->Text=="") {
        Edit2->Text="";
    }else Edit2->Text="Erreur de saisie";
} }
//---------------------------------------------------------------------------

void __fastcall TForm1::Edit2Change(TObject *Sender)
{
 try{
valeur = StrToFloat(Edit2->Text);
valeur = valeur * taux;
Edit1->OnChange=NULL;

Edit1->Text=FloatToStr(valeur);
Edit1->OnChange=Edit1Change; }

catch(...){
    if (Edit2->Text=="") {
        Edit1->Text="";
    }else Edit1->Text="Erreur de saisie";
}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FrancCFA1Click(TObject *Sender)
{
taux = 0.0015;
Label1->Caption="Franc CFA";
devise2->Enabled=True; //dollars
Yen1->Enabled=True;// yen
Yen2->Enabled=True;//livres
FrancCFA1->Enabled=False;// franc cfa

}

//---------------------------------------------------------------------------

void __fastcall TForm1::devise2Click(TObject *Sender)
{
taux = 0.92;

Label1->Caption="Dollars";
devise2->Enabled=False; //dollars
Yen1->Enabled=True;// yen
Yen2->Enabled=True;//livres
FrancCFA1->Enabled=True;// franc cfa
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Yen1Click(TObject *Sender)
{
taux = 0.0062;

Label1->Caption="Yen";
devise2->Enabled=True; //dollars
Yen1->Enabled=False;// yen
Yen2->Enabled=True;//livres
FrancCFA1->Enabled=True;// franc cfa
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Yen2Click(TObject *Sender)
{
taux = 1.19198;

Label1->Caption="Livres";
devise2->Enabled=True; //dollars
Yen1->Enabled=True;// yen
Yen2->Enabled=False;//livres
FrancCFA1->Enabled=True;// franc cfa
}
//---------------------------------------------------------------------------

