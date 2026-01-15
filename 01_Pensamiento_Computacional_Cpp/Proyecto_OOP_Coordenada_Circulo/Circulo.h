#pragma once
#include <string>
#include "Coordenada.h"
using namespace std;

class Circulo
{
private:
    Coordenada centro;
    int iRadio;

public:
    Circulo();                               // Constructor por defecto
    Circulo(Coordenada cen, int r);          // Constructor con parámetros

    void setCentro(Coordenada cen);
    void setRadio(int r);

    Coordenada getCentro();
    int getRadio();

    string str();                            // Representación del círculo
};


