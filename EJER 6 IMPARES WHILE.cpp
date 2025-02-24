// Archivo: impares_while.cpp
#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Ingrese un número mayor a 10 y menor que 30: ";
    cin >> num;
    if (num > 10 && num < 30) {
        int i = 1;
        while (i <= num) {
            cout << i << " ";
            i += 2;
        }
        cout << endl;
    } else {
        cout << "El número ingresado no está en el rango solicitado." << endl;
    }
    return 0;
}

