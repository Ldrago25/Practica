#ifndef BACTERIOLOGIA_H
#define BACTERIOLOGIA_H

#include "Examen.h"

class Bacteriologia : public Examen
{
	private:
		int NumeroHoras;
		bool resultado;
	public:
		Bacteriologia(int NumeroHoras,bool resultado,int id,char descripcion[],float precio);
		Bacteriologia();
		void setNumeroHoras(int NumeroHoras);
		void setresultado(bool resultado);
		int getNumeroHoras();
		bool getresultado();
	protected:
};

#endif
