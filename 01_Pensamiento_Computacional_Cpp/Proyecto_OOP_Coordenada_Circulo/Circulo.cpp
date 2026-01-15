#include "Circulo.h"
#include <string>
using namespace std;

Circulo::Circulo()
{
    centro = Coordenada(1, 1);
    iRadio = 1;
}

Circulo::Circulo(Coordenada cen, int r)
{
    centro = cen;
    iRadio = r;
}

void Circulo::setCentro(Coordenada cen)
{
    centro = cen;
}

void Circulo::setRadio(int r)
{
    iRadio = r;
}

Coordenada Circulo::getCentro()
{
    return centro;
}

int Circulo::getRadio()
{
    return iRadio;
}

string Circulo::str()
{
    return "Centro: " + centro.str() + " Radio: " + to_string(iRadio);
}

