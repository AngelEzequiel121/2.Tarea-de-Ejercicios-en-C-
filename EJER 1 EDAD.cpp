// Archivo: mayor_de_edad.cpp
#include <iostream>
using namespace std;

int main() {
    int edad;
    cout << "Ingrese su edad: ";
    cin >> edad;
    if (edad >= 18)
        cout << "Eres mayor de edad." << endl;
    else
        cout << "No eres mayor de edad." << endl;
    return 0;
}

