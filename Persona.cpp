#include "Persona.h"

Persona::Persona()
{
	strcpy(this->Cedula,"V-26566047");
	strcpy(this->Apellido,"Vargas Rueda");
	strcpy(this->Nombre,"Brandon Jose");
	Sexo=' ';
	Edad=20;
	strcpy(this->Telefono,"+58-426-1734634");
}
	
Persona::Persona(char Cedula[],char Apellido[],char Nombre[],char Sexo, int Edad, char Telefono[])
{
	strcpy(this->Cedula,Cedula);
	strcpy(this->Apellido,Apellido);
	strcpy(this->Nombre,Nombre);
	this->Sexo=Sexo;
	this->Edad=Edad;
	strcpy(this->Telefono,Telefono);
}

char* Persona::getCedula()
{
	return Cedula;	
}

char* Persona::getApellido()
{
	return Apellido;
}

char* Persona::getNombre()
{
	return Nombre;
}

char* Persona::getTelefono()
{
	return Telefono;
}

int Persona::getEdad()
{
	return Edad;	
}

void Persona::cargar()
{
	cout<<endl<<"..:::Bienvenido:::..."<<endl;
	cout<<endl<<"Nombre del paciente: "<<endl;
	cin.sync();
	cin.getline(Nombre,20);	
	cout<<endl<<"Apellido: "<<endl;
	cin.sync();
	cin.getline(Apellido,20);
	cout<<endl<<"Sexo: "<<endl;
	cin.sync();
	Sexo=cin.get();
	cout<<endl<<"Edad del paciente: "<<endl;
	cin>>Edad;
	cout<<endl<<"Cedula del paciente: "<<endl;
	cin.sync();
	cin.getline(Cedula,20);	
	cout<<endl<<"Telefono del paciente: "<<endl;
	cin.sync();
	cin.getline(Telefono,20);
}

char* Persona::getNombreCompleto(char Nombre[],char Apellido[])
{
	return	strcat(Nombre, Apellido);  	
}
void Persona::mostrar()
{
	cout<<endl<<"-> "<<Cedula<<" "<<this->getNombreCompleto(Nombre, Apellido)<<endl;	
}



