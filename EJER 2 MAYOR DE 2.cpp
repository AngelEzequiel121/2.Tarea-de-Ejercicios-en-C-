// Archivo: mayor_de_dos.cpp
#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    cout << "Ingrese el primer numero: ";
    cin >> num1;
    cout << "Ingrese el segundo numero: ";
    cin >> num2;
    if (num1 > num2)
        cout << "El mayor es " << num1 << endl;
    else if (num2 > num1)
        cout << "El mayor es " << num2 << endl;
    else
        cout << "Los numeros son iguales." << endl;
    return 0;
}

