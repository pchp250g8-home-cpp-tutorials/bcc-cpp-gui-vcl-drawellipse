//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::FormResize(TObject *Sender)
{
    Invalidate();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::FormPaint(TObject *Sender)
{
	TCanvas *g = this->Canvas;
	TRect rcPaint = g->ClipRect;
	g->Brush->Color = clBlack;
	g->FillRect(rcPaint);
	g->Pen->Color = clRed;
	g->Pen->Width = 5;
	g->Brush->Color = clYellow;
    g->Ellipse(rcPaint);
}
//---------------------------------------------------------------------------
