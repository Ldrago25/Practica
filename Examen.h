#ifndef EXAMEN_H
#define EXAMEN_H
#include <iostream>
#include <string.h>
using namespace std;
class Examen
{
	private:
		int id;
		char descripcion[20];
		float precio;
	public:
		Examen();
		Examen(int id,char descripcion[],float precio);
		void setId(int id);
		void setDes(char descripcion[]);
		void setPrecio(float precio);
		int getId();
		char* getDes();
		float getPrecio();
		float calcularPrecioReal();
	protected:
};

#endif
