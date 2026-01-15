#include "Direccion.h"
#include <iostream>
using namespace std;
void Direccion::setCalle(string c)
{
	calle = c;
}
string Direccion::getCalle()
{
	return calle;
}
void Direccion::setNumeroCasa(int num)
{
	numero_casa = num;
}
int Direccion::getNumeroCasa()
{
	return numero_casa;
}
void Direccion::setCiudad(string c)
{
	ciudad = c;
}
string Direccion::getCiudad()
{
	return ciudad;
}
void Direccion::setCodigoPostal(int cp)
{
	codigo_postal = cp;
}
int Direccion::getCodigoPostal()
{
	return codigo_postal;
}
void Direccion::mostrarDireccion()
{
	cout << calle << " " << numero_casa << ", " << ciudad << ", " << codigo_postal << endl;
}