// Archivo: impares_while.cpp
#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Ingrese un n�mero mayor a 10 y menor que 30: ";
    cin >> num;
    if (num > 10 && num < 30) {
        int i = 1;
        while (i <= num) {
            cout << i << " ";
            i += 2;
        }
        cout << endl;
    } else {
        cout << "El n�mero ingresado no est� en el rango solicitado." << endl;
    }
    return 0;
}

