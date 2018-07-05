#ifndef SANGRE_H
#define SANGRE_H

#include "Examen.h"

class Sangre : public Examen
{
	private:
		char Perfil[50];
		int Resultado;
	public:
		Sangre(char Perfil[],int Resultado,int id,char descripcion[],float precio);
		Sangre();
		void setPerfil(char Perfil[]);
		void setResultado(int Resultado);
		char* getPerfil();
		int getResultado();
	protected:
};

#endif
