// Archivo: selector_de_ejercicios.cpp
#include <iostream>
using namespace std;

void mostrar_menu() {
    cout << "Seleccione un ejercicio:" << endl;
    cout << "1. Mayor de edad" << endl;
    cout << "2. Mayor de dos números" << endl;
    cout << "3. Par o impar" << endl;
    cout << "4. Factorial (while)" << endl;
    cout << "5. Impares (for)" << endl;
    cout << "6. Impares (while)" << endl;
    cout << "7. Día de la semana (switch)" << endl;
    cout << "Ingrese su opción: ";
}

int main() {
    int opcion;
    mostrar_menu();
    cin >> opcion;
    
    switch (opcion) {
        case 1: system("./mayor_de_edad"); break;
        case 2: system("./mayor_de_dos"); break;
        case 3: system("./par_o_impar"); break;
        case 4: system("./factorial_while"); break;
        case 5: system("./impares_for"); break;
        case 6: system("./impares_while"); break;
        case 7: system("./dia_de_la_semana"); break;
        default: cout << "Opción no válida." << endl;
    }
    return 0;
}

