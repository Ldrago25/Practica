#ifndef PERSONA_H
#define PERSONA_H
#include <iostream>
#include <string.h>

using namespace std;
class Persona
{
	private:
		char Cedula[20];
		char Apellido[20];
		char Nombre[20];
		char Sexo;
		int Edad;
		char Telefono[20];
	public:
		Persona(char Cedula[],char Apellido[],char Nombre[],char Sexo, int Edad, char Telefono[]);
		Persona();
		char* getCedula();
		char* getApellido();
		char* getNombre();
		char* getSexo();
		char* getTelefono();
		int getEdad();
		void cargar();
		void mostrar();
		virtual char* getNombreCompleto(char Nombre[],char Apellido[])=0;
	protected:
};

#endif
