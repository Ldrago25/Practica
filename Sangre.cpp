#include "Sangre.h"

Sangre::Sangre()
{
	strcpy(Perfil,"Hombre");
	Resultado=30;
}

Sangre::Sangre(char Perfil[],int Resultado,int id,char descripcion[],float precio):Examen(id,descripcion,precio)
{
	strcpy(this->Perfil,Perfil);
	this->Resultado=Resultado;
}

void Sangre::setPerfil(char Perfil[])
{
	strcpy(this->Perfil,Perfil);
}

void Sangre::setResultado(int Resultado)
{
	this->Resultado=Resultado;
}

char* Sangre::getPerfil()
{
	return Perfil;
}

int Sangre::getResultado()
{
	return Resultado;
}
