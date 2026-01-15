#pragma once          // Evita que el archivo se incluya dos veces
#include <string>
#include <iostream>
using namespace std;

// Definición de la clase CuentaBancaria
class CuentaBancaria
{
private:
    // Atributos privados de la cuenta
    string titular;       // Nombre del titular de la cuenta
    int numeroCuenta;     // Número único de la cuenta
	float saldo = 0;          // Inicializamos el saldo en 0

public:
    // Métodos públicos de la clase

    // Aumenta el saldo sumando la cantidad depositada
    void depositar(float cantidad);

    // Disminuye el saldo si hay fondos suficientes
    void retirar(float cantidad);

    // Muestra el saldo actual de la cuenta
    void mostrarSaldo();
};
