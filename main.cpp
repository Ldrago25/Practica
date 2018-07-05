#include <iostream>
#include <vector>
#include "Persona.h"
#include "PacienteConOrden.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*
		PacienteConOrden* h=new PacienteConOrden();
	
	
	vector <Persona*> persona;
	PacienteConOrden* v= new PacienteConOrden();
	PacienteConOrden* b= new PacienteConOrden();
	persona.push_back(v);
	persona.push_back(b);
*/
int main(int argc, char** argv) {


	
	PacienteConOrden *paciente=new PacienteConOrden();
	paciente->cargar();
	paciente->mostrar();
	
	
	
	
	return 0;
}
