#pragma once
#include <string>
using namespace std;

class Coordenada
{
private:
    int ix;
    int iy;

public:
    Coordenada();                 // Constructor por defecto
    Coordenada(int A, int B);     // Constructor con parámetros

    void setX(int A);
    void setY(int B);

    int getX();
    int getY();

    string str();                 // Representación en texto
};

