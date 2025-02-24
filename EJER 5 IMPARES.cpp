// Archivo: impares_for.cpp
#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Ingrese un numero mayor a 10 y menor que 30: ";
    cin >> num;
    if (num > 10 && num < 30) {
        for (int i = 1; i <= num; i += 2)
            cout << i << " ";
        cout << endl;
    } else {
        cout << "El numero ingresado no esta en el rango solicitado." << endl;
    }
    return 0;
}

