// Archivo: dia_de_la_semana.cpp
#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Ingrese un numero del 1 al 5: ";
    cin >> num;
    switch (num) {
        case 1: cout << "Lunes" << endl; break;
        case 2: cout << "Martes" << endl; break;
        case 3: cout << "Miércoles" << endl; break;
        case 4: cout << "Jueves" << endl; break;
        case 5: cout << "Viernes" << endl; break;
        default: cout << "Numero fuera de rango" << endl;
    }
    return 0;
}

