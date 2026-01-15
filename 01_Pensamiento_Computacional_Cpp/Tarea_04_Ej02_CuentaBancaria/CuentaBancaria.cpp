#include "CuentaBancaria.h"
#include <iostream>
using namespace std;

// Método para depositar dinero en la cuenta
void CuentaBancaria::depositar(float cantidad) {
    // Aumentamos el saldo sumando la cantidad recibida
    saldo += cantidad;
}

// Método para retirar dinero de la cuenta
void CuentaBancaria::retirar(float cantidad) {

    // Verificamos si hay suficiente saldo para retirar
    if (cantidad > saldo) {
        cout << "Fondos insuficientes" << endl;  // Mensaje de error
    }
    else {
        // Si hay fondos, restamos la cantidad del saldo
        saldo -= cantidad;
    }
}

// Método para mostrar el saldo actual de la cuenta
void CuentaBancaria::mostrarSaldo() {
    cout << "El saldo actual es: " << saldo << endl;
}

