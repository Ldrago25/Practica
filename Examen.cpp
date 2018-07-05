#include "Examen.h"

Examen::Examen()
{
	id=20;
	strcpy(descripcion,"Examen");
	precio=2000;
}

Examen::Examen(int id,char descripcion[],float precio)
{
	this->id=id;
	strcpy(this->descripcion,descripcion);
	this->precio=precio;
}

void Examen::setId(int id)
{
	this->id=id;
}

int Examen::getId()
{
	return id;
}

void Examen::setDes(char descripcion[])
{
	strcpy(this->descripcion,descripcion);
}

char* Examen::getDes()
{
	return descripcion;
}

void Examen::setPrecio(float precio)
{
	this->precio=precio;
}

float Examen::getPrecio()
{
	return precio;
}

float Examen::calcularPrecioReal()
{
	int a;
	a=precio*0.12;
	return precio+a;
}
