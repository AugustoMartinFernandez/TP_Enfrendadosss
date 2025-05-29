#include "funciones.h"
#include <iostream>
#include <string>

using namespace std;

char pedirLetra(string mensaje)
{
    char letra;
    cout << "+---------------------------------------+" << endl;
    cout << "|  " << mensaje << "  (S/N):     |" << endl;
    cout << "+---------------------------------------+" << endl;
    cout << "-> ";
    cin >> letra;
    return letra;
}

bool confirmarSalida()
{
    char letra = pedirLetra("Quieres salir del programa?");
    if (letra == 'S' || letra == 's')
    {
        // Segunda confirmación
        char confirmacion = pedirLetra("Estas seguro?");
        if (confirmacion == 'S' || confirmacion == 's')
        {
            cout << "+---------------------------------------+" << endl;
            cout << "|     Saliendo de Enfrendados...        |" << endl;
            cout << "+---------------------------------------+" << endl;
            system("pause");
            return true; // Confirma dos veces que quiere salir
        }
        else
        {
            cout << "+---------------------------------------+" << endl;
            cout << "|  Salida cancelada. Continuamos...     |" << endl;
            cout << "+---------------------------------------+" << endl;
            system("pause");
            return false; // Cancela en la segunda confirmación
        }
    }
    else if (letra == 'N' || letra == 'n')
    {
        cout << "+---------------------------------------+" << endl;
        cout << "|No te preocupes seguimos en Enfrendados|" << endl;
        cout << "+---------------------------------------+" << endl;
        system("pause");
        return false; // No quiere salir
    }
    else
    {
        cout << "+---------------------------------------+" << endl;
        cout << "|  Entrada invalida. Preciona 's' o 'n'.|" << endl;
        cout << "+---------------------------------------+" << endl;
        system("pause");
        return false; // Entrada inválida, no sale
    }
}

void mostrarSeccion(string titulo, string mensaje)
{
    cout << "+=====================================+" << endl;
    cout << "|------ " << titulo << " -------->" << endl;
    cout << "+=====================================+" << endl;
    cout << mensaje << endl;
    system("pause"); // Pausa para que el usuario lea la sección antes de continuar
}
