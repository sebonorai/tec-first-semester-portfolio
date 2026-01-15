// Tarea3.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <string>
#include <iostream>
#include <cstdlib>

//Sebastian Noriega A00840922
//Tarea 3
//07/11/2025
//Grupo TC1033.301


using namespace std;

//classwork
/*
int main() {
	int arr[5], maximo, minimo;
	cout << "Ingrese 5 numeros: ";
	for (int i = 0; i < 5; i++) cin >> arr[i];
	maximo = minimo = arr[0];
	for (int i = 1; i < 5; i++) {
		if (arr[i] > maximo) maximo = arr[i];
		if (arr[i] < minimo) minimo = arr[i];
	}
	cout << "Maximo: " << maximo << ", Minimo : " << minimo << endl;


	int arr1[5], arr2[5], suma[5];
	cout << "Ingrese 5 numeros para el primer arreglo: ";
	for (int i = 0; i < 5; i++) cin >> arr1[i]; cout << "Ingrese 5 numeros para el segundo arreglo: ";
	for (int i = 0; i < 5; i++) cin >> arr2[i];
	for (int i = 0; i < 5; i++) suma[i] = arr1[i] + arr2[i];
	cout << "Suma de los arreglos:";
	for (int i = 0; i < 5; i++) cout << suma[i] << " ";
	cout << endl;
	return 0;
}
*/

//homework 3
// 
// Parte 1 Programa 2: calcula el área de un triángulo
void area(int base, int altura) {
	int area = (base * altura) / 2; // fórmula: base*altura/2
	cout << "El area del triangulo es: " << area << endl;
}

// Parte 4 Programa 2: calcula el promedio de un arreglo
float arr4(int arr3[], int n) {
	float sume = 0; // acumula la suma de los elementos
	for (int i = 0; i < n; i++) {
		sume += arr3[i]; // suma cada elemento
	}
	float promedio = sume / n; // divide la suma entre la cantidad
	return promedio; // retorna el resultado
}

int main() {
	srand((unsigned)time(0)); // genera números aleatorios diferentes cada vez

	// PARTE 1 PROGRAMA 2
	// Calcula el área de un triángulo
	int base, altura;
	cout << "Ingrese la base del triangulo: ";
	cin >> base;
	cout << "Ingrese la altura del triangulo: ";
	cin >> altura;
	area(base, altura); // llama a la función

	// PARTE 2 PROGRAMA 2
	// Genera 10 números aleatorios y calcula su promedio
	int arr[10], suma = 0, promedio;
	for (int i = 0; i < 10; i++) {
		arr[i] = rand(); // genera un número aleatorio
		suma += arr[i];  // acumula la suma
	}
	promedio = suma / 10; // divide entre 10 para obtener el promedio
	cout << "El promedio de los numeros generados es: " << promedio << endl;

	// PARTE 3 PROGRAMA 2	
	// Llena una matriz 2x2 con números aleatorios y suma sus elementos
	int matriz1[2][2], suma1 = 0;
	for (int i = 0; i < 2; i++) {           // recorre filas
		for (int j = 0; j < 2; j++) {       // recorre columnas
			matriz1[i][j] = rand() % 100;   // número aleatorio entre 0 y 99
			suma1 += matriz1[i][j];         // acumula el valor
		}
	}
	cout << "La suma de los elementos de la matriz es: " << suma1 << endl;

	// PARTE 4 PROGRAMA 2
	// Calcula el promedio de un arreglo que el usuario define
	int n;
	cout << "Ingrese el tamano del arreglo: ";
	cin >> n;

	int* arr3 = new int[n]; // crea arreglo dinámico del tamaño que el usuario indique

	for (int i = 0; i < n; i++) {
		cout << "Ingresa un numero: ";
		cin >> arr3[i]; // llena el arreglo con valores ingresados
	}

	float resultado = arr4(arr3, n); // llama a la función para calcular el promedio
	cout << "El promedio es: " << resultado << endl;

	delete[] arr3; // libera la memoria dinámica

	return 0;
}
