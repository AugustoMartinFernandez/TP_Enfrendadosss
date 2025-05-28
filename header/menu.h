#ifndef MENU_H
#define MENU_H

#include <iostream>
using namespace std;

// Funcion para confirmar si el usuario quiere salir o seguir dentro del menu
bool confirmarSalida()
{
    char letra;
    cout << "+---------------------------------------+" << endl;
    cout << "|  Quieres salir del programa? (S/N):   |" << endl;
    cout << "+---------------------------------------+" << endl;
    cout << "-> ";
    cin >> letra;

    if (letra == 'S' || letra == 's')
    {
        cout << "+---------------------------------------+" << endl;
        cout << "|    Saliendo del programa... Chau!    |" << endl;
        cout << "+---------------------------------------+" << endl;
        return true; // El usuario confirma que quiere salir
    }
    else if (letra == 'N' || letra == 'n')
    {
        cout << "+---------------------------------------+" << endl;
        cout << "|   Perfecto. Seguimos en el menu.      |" << endl;
        cout << "+---------------------------------------+" << endl;
        return false; // El usuario quiere quedarse
    }
    else
    {
        cout << "+---------------------------------------+" << endl;
        cout << "|  Entrada invalida. Preciona 's' o 'n'.|" << endl;
        cout << "+---------------------------------------+" << endl;
        return false; // Entrada invalida, se queda en el men
    }
}

#endif