#pragma once
#include <string>
using namespace std;
class Direccion
{
private:
	string calle;
	int numero_casa;
	string ciudad;
	int codigo_postal;
public:
	void setCalle(string);
	string getCalle();
	void setNumeroCasa(int);
	int getNumeroCasa();
	void setCiudad(string);
	string getCiudad();
	void setCodigoPostal(int);
	int getCodigoPostal();
	void mostrarDireccion();
};

