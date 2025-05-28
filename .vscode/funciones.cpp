#include "funciones.h"
#include <iostream>
#include <string>

using namespace std;

char pedirLetra(std::string mensaje)
{
    char letra;
    std::cout << "+---------------------------------------+" << std::endl;
    std::cout << "|  " << mensaje << "  (S/N):  |" << std::endl;
    std::cout << "+---------------------------------------+" << std::endl;
    std::cout << "-> ";
    std::cin >> letra;
    return letra;
}

bool confirmarSalida()
{
    char letra = pedirLetra("Quieres salir del programa?");
    if (letra == 'S' || letra == 's')
    {
        std::cout << "+---------------------------------------+" << std::endl;
        std::cout << "|     Saliendo de Enfrendados...        |" << std::endl;
        std::cout << "+---------------------------------------+" << std::endl;
        return true; // El usuario confirma que quiere salir
    }
    else if (letra == 'N' || letra == 'n')
    {
        std::cout << "+---------------------------------------+" << std::endl;
        std::cout << "|No te preocupes seguimos en Enfrendados|" << std::endl;
        std::cout << "+---------------------------------------+" << std::endl;
        return false; // El usuario quiere quedarse
    }
    else
    {
        std::cout << "+---------------------------------------+" << std::endl;
        std::cout << "|  Entrada invalida. Preciona 's' o 'n'.|" << std::endl;
        std::cout << "+---------------------------------------+" << std::endl;
        return false; // Entrada invalida, se queda en el menu
    }
}

void mostrarSeccion(std::string titulo, std::string mensaje)
{
    std::cout << "+=====================================+" << std::endl;
    std::cout << "|------ " << titulo << " -------->" << std::endl;
    std::cout << "+=====================================+" << std::endl;
    std::cout << mensaje << std::endl;
}
