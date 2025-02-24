// Archivo: factorial_while.cpp
#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Ingrese un numero: ";
    cin >> num;
    int factorial = 1, i = 1;
    while (i <= num) {
        factorial *= i;
        i++;
    }
    cout << "El factorial de " << num << " es " << factorial << endl;
    return 0;
}

