#include <string>
#include <iostream>
#include "Persona.h"
#include <string>
#include "Direccion.h"
using namespace std;
//Sebastian Noriega A00840922
//Tarea 6
//24/11/2025
//Grupo TC1033.301

int main()
{
    // Se crea un objeto de la clase Direccion
    Direccion direccion1;

    // Se crea un objeto de la clase Persona
    Persona persona1;

    // Variables temporales para capturar datos del usuario
    string nombre, calle, ciudad;
    int edad, numero_casa, codigo_postal;

    // --- Captura del nombre ---
    cout << "Cual es tu nombre?" << endl;
    cin >> nombre;
    persona1.setNombre(nombre);   // Se guarda el nombre en el objeto Persona

    // --- Captura de la edad ---
    cout << "Cual es tu edad?" << endl;
    cin >> edad;
    persona1.setEdad(edad);       // Se guarda la edad en el objeto Persona

    // --- Captura de datos de direccion ---
    cout << "Cual es el nombre de la calle donde vives?" << endl;
    cin >> calle;
    direccion1.setCalle(calle);   // Guarda el nombre de la calle

    cout << "Cual es el numero de casa?" << endl;
    cin >> numero_casa;
    direccion1.setNumeroCasa(numero_casa); // Guarda el número de casa

    cout << "Cual es la ciudad donde vives?" << endl;
    cin >> ciudad;
    direccion1.setCiudad(ciudad); // Guarda la ciudad

    cout << "Cual es el codigo postal?" << endl;
    cin >> codigo_postal;
    direccion1.setCodigoPostal(codigo_postal); // Guarda el código postal

    // Asignamos el objeto Dirección a la Persona
    persona1.setDireccion(direccion1);

    // --- Salida final ---
    cout << "Los datos ingresados son los siguientes: " << endl;
    persona1.mostrarPersona();    // Muestra toda la información completa

    return 0;
}
