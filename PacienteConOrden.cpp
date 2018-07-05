#include "PacienteConOrden.h"

PacienteConOrden::PacienteConOrden()
{
	strcpy(Fecha,"2018");
	MontoPagado=200.265;
}

PacienteConOrden::PacienteConOrden(char Fecha[],double MontoPagado,char Cedula[],char Apellido[],char Nombre[],char Sexo, int Edad, char Telefono[]):Persona(Cedula,Apellido,Nombre,Sexo,Edad,Telefono)
{
	strcpy(this->Fecha,Fecha);
	this->MontoPagado=MontoPagado;
}

void PacienteConOrden::setFecha(char Fecha[])
{
	strcpy(this->Fecha,Fecha);
}

void PacienteConOrden::setMontoPagado(double MontoPagado)
{
	this->MontoPagado=MontoPagado;
}

char* PacienteConOrden::getFecha()
{
	return Fecha;
}

double PacienteConOrden::getMontoPagado()
{
	return MontoPagado;
}
void PacienteConOrden::cargar()
{
	Persona::cargar();
	cout<<endl<<"Fecha: "<<endl;
	cin.sync();
	cin.getline(Fecha,20);
}

char* PacienteConOrden::getNombreCompleto(char Nombre[],char Apellido[])
{
	return strcat(Nombre,Apellido);	
}

void PacienteConOrden::mostrar()
{
	Persona::mostrar();
}
