#pragma once
#include "Direccion.h"
#include <string>
using namespace std;
class Persona
{
private:
	string nombre;
	int edad;
	Direccion direccion;
public:
	string getNombre();
	void setNombre(string);
	int getEdad();
	void setEdad(int);
	Direccion getDireccion();
	void setDireccion(Direccion);
	void mostrarPersona();

};

