#include "Bacteriologia.h"

Bacteriologia::Bacteriologia()
{
	NumeroHoras=3;
	resultado=200;
}

Bacteriologia::Bacteriologia(int NumeroHoras,bool resultado,int id,char descripcion[],float precio):Examen(id,descripcion,precio)
{
	this->NumeroHoras=NumeroHoras;
	this->resultado=resultado;
}

void Bacteriologia::setNumeroHoras(int NumeroHoras)
{
	this->NumeroHoras=NumeroHoras;
}

void Bacteriologia::setresultado(bool resultado)
{
	this->resultado=resultado;
}

int Bacteriologia::getNumeroHoras()
{
	return NumeroHoras;
}

bool Bacteriologia::getresultado()
{
	return resultado;
}
