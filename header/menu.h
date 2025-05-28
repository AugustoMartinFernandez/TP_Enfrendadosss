#ifndef MENU_H
#define MENU_H

#include <iostream>
#include <string>
using namespace std;

// Funcion auxiliar para pedir una letra con mensaje simple
char pedirLetra(string mensaje)
{
    char letra;
    cout << "+---------------------------------------+" << endl;
    cout << "|  " << mensaje << "  (S/N):  |" << endl;
    cout << "+---------------------------------------+" << endl;
    cout << "-> ";
    cin >> letra;
    return letra;
}

// Funcion para confirmar si el usuario quiere salir o seguir dentro del menu
bool confirmarSalida()
{
    char letra = pedirLetra("Quieres salir del programa?");
    if (letra == 'S' || letra == 's')
    {
        cout << "+---------------------------------------+" << endl;
        cout << "|     Saliendo de Enfrendados...        |" << endl;
        cout << "+---------------------------------------+" << endl;
        return true; // El usuario confirma que quiere salir
    }
    else if (letra == 'N' || letra == 'n')
    {
        cout << "+---------------------------------------+" << endl;
        cout << "|No te preocupes seguimos en Enfrendados|" << endl;
        cout << "+---------------------------------------+" << endl;
        return false; // El usuario quiere quedarse
    }
    else
    {
        cout << "+---------------------------------------+" << endl;
        cout << "|  Entrada invalida. Preciona 's' o 'n'.|" << endl;
        cout << "+---------------------------------------+" << endl;
        return false; // Entrada invalida, se queda en el menu
    }
}

// Funcion para mostrar titulo y mensaje de cada opcion dentro del switch
void mostrarSeccion(const string titulo, const string mensaje)
{
    cout << "+=====================================+" << endl;
    cout << "|------ " << titulo << " -------->" << endl;
    cout << "+=====================================+" << endl;
    cout << mensaje << endl;
}

#endif
