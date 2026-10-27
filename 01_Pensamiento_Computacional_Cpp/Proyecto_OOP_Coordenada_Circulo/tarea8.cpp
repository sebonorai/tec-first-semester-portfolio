#include <iostream>
#include "Circulo.h"
using namespace std;

// Sebastian Noriega
// Tarea 8
// Grupo TC1033.301

int main()
{
    Coordenada c1(10, 5);
    Circulo c2(c1, 10);

    cout << "Datos del círculo: " << c2.str() << endl;

    Coordenada centro = c2.getCentro();
    cout << "Centro: (" << centro.getX() << ", " << centro.getY() << ")" << endl;
    cout << "Radio: " << c2.getRadio() << endl;

    return 0;
}
