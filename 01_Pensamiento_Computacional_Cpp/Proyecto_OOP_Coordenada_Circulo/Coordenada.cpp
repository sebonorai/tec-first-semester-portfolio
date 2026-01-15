#include "Coordenada.h"
#include <string>
using namespace std;

Coordenada::Coordenada()
{
    ix = 0;
    iy = 0;
}

Coordenada::Coordenada(int A, int B)
{
    ix = A;
    iy = B;
}

void Coordenada::setX(int A)
{
    ix = A;
}

void Coordenada::setY(int B)
{
    iy = B;
}

int Coordenada::getX()
{
    return ix;
}

int Coordenada::getY()
{
    return iy;
}

string Coordenada::str()
{
    return "(" + to_string(ix) + ", " + to_string(iy) + ")";
}

