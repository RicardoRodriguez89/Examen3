#include <iostream>
using namespace std;

int factorial(int n) {
    if (n == 0) {
        return 1;
    }
    return n * factorial(n - 1);
}

int main() {
    int numero;
    cout << "Ingresa un numero entero positivo: ";
    cin >> numero;
        int resultado = factorial(numero);
        cout << "El factorial de " << numero << " es: " << resultado << endl;

    return 0;
}
