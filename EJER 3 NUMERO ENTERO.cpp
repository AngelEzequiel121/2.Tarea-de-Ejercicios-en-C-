// Archivo: par_o_impar.cpp
#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Ingrese un numero entero: ";
    cin >> num;
    if (num % 2 == 0)
        cout << "El numero es par." << endl;
    else
        cout << "El numero es impar." << endl;
    return 0;
}

