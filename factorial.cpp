#include <iostream>
using namespace std;

int factorial(int n) {
    if (n == 0) {
        return 1;
    }
    return n * factorial(n - 1);
}

void cajeroAutomatico() {
    int saldo = 20000;
    int opcion, cantidad;

    do {
        cout << "\n--- Cajero Automatico ---\n";
        cout << "1. Consultar saldo\n";
        cout << "2. Retirar efectivo\n";
        cout << "3. Salir\n";
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                cout << "Saldo actual: $" << saldo << endl;
                break;
            case 2:
                cout << "Cuanto deseas retirar: ";
                cin >> cantidad;
                if (cantidad <= saldo) {
                    saldo -= cantidad;
                    cout << "Saldo restante: $" << saldo << endl;
                } else {
                    cout << "Fondos insuficientes." << endl;
                }
                break;
            case 3:
                cout << "Saliendo del cajero automatico." << endl;
                break;
            default:
                cout << "Opcion no valida. Intente nuevamente." << endl;
        }
    } while (opcion != 3);
}

int main() {
    int eleccion;

    do {
        cout << "\n--- Menu ---\n";
        cout << "1. Factorial\n";
        cout << "2. Cajero Automático\n";
        cout << "3. Salir\n";
        cout << "Seleccione una opción: ";
        cin >> eleccion;

        switch (eleccion) {
            case 1: {
                int numero;
                cout << "Ingresa un numero entero positivo: ";
                cin >> numero;
                if (numero < 0) {
                    cout << "Por favor, ingresa un numero entero positivo." << endl;
                } else {
                    int resultado = factorial(numero);
                    cout << "El factorial de " << numero << " es: " << resultado << endl;
                }
                break;
            }
            case 2:
                cajeroAutomatico();
                break;
            case 3:
                cout << "Saliendo." << endl;
                break;
            default:
                cout << "No es una opcion" << endl;
        }
    } while (eleccion != 3);

    return 0;
}
