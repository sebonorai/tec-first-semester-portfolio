#include <string>
#include <iostream>
#include "CuentaBancaria.h"   // Incluimos la clase para poder usarla
using namespace std;
//Sebastian Noriega A00840922
//Tarea 4
//16/11/2025
//Grupo TC1033.301

int main()
{
    // Creamos un objeto de tipo CuentaBancaria
    CuentaBancaria cuenta;

    // Depositamos dinero en la cuenta
    cuenta.depositar(500.0);    // Aumenta el saldo en 500

    // Retiramos parte del saldo
    cuenta.retirar(200.0);      // Resta 200 al saldo si hay fondos

    // Mostramos el saldo final después de las operaciones
    cuenta.mostrarSaldo();

    return 0;   // Fin del programa
}
