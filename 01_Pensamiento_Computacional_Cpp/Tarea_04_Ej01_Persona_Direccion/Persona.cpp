#include "Persona.h"
#include <string>
#include <iostream>
#include "Direccion.h"

using namespace std;
string Persona::getNombre()
{
	return nombre;
}
void Persona::setNombre(string n)
{
	nombre = n;
}
int Persona::getEdad()
{
	return edad;
}
void Persona::setEdad(int e)
{
	edad = e;
}
Direccion Persona::getDireccion()
{
	return direccion;
}
void Persona::setDireccion(Direccion d)
{
	direccion = d;
}
void Persona::mostrarPersona()
{
	cout << "Nombre: " << nombre << endl;
	cout << "Edad: " << edad << endl;
	cout << "Direccion: ";
	direccion.mostrarDireccion(); // Llama al metodo mostrarDireccion de la clase Direccion

}