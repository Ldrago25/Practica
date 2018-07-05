#ifndef PACIENTECONORDEN_H
#define PACIENTECONORDEN_H
#include "Examen.h"
#include "Persona.h"

class PacienteConOrden : public Persona
{
	private:
		char Fecha[10];
		double MontoPagado;
		Examen **a=new Examen[2];
	public:
		PacienteConOrden();
		PacienteConOrden(char Fecha[],double MontoPagado,char Cedula[],char Apellido[],char Nombre[],char Sexo, int Edad, char Telefono[]);
		bool CalcularSensibilidad();
		float CalcularMontoPagado();
		void setFecha(char Fecha[]);
		char* getFecha();
		void setMontoPagado(double MontoPagado);
		double getMontoPagado();
		void cargar();
		virtual char* getNombreCompleto(char Nombre[],char Apellido[]);
		void mostrar();
	protected:
};

#endif
