#include "menu.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{ // Variable para guardar el nombre del usuario
    string nombre;
    cout << "Ingrese su nombre: ";
    getline(cin, nombre);
    // Variables para el menu principal
    int opcionMenu;
    bool salir = false; // Inicializamos la salida del menu en FALSE

    // Creamos el titulo en arte ASCII
    cout << "   _______   ____________  _______   ______  ___ \t____  ____  _____\n";
    cout << "  / ____/ | / / ____/ __ \\/ ____/ | / / __ \\/   |  / __ \\/ __ \\/ ___/\n";
    cout << " / __/ /  |/ / /_  / /_/ / __/ /  |/ / / / / /| | / / / / / / /\\__ \\\n";
    cout << "/ /___/ /|  / __/ / _, _/ /___/ /|  / /_/ / ___ |/ /_/ / /_/ /___/ /\n";
    cout << "/_____/_/ |_/_/   /_/ |_/_____/_/ |_/_____/_/  |_/_____/____//____/\n";
    cout << endl;
    cout << "-----------------------------------------------------------------" << endl;
    cout << "Bienvenido, " << nombre << "!" << endl;
    do
    {
        cout << endl;
        cout << "+=====================================+" << endl;
        cout << "|      MENUUU PRINCIPAL DEL JUEGO       |" << endl;
        cout << "|-------------------------------------|" << endl;
        cout << "|   1) * Jugar con Tincho!!           |" << endl;
        cout << "|   2) * Estadisticas                 |" << endl;
        cout << "|   3) * Creditos                     |" << endl;
        cout << "|-------------------------------------|" << endl;
        cout << "|   0) * Salir                        |" << endl;
        cout << "+=====================================+" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcionMenu;
        cout << "---------------------------------------------" << endl;

        switch (opcionMenu)
        {
        case 1:
            cout << "+=====================================+" << endl;
            cout << "|          JUEGO DE DADOS             |" << endl;
            cout << "+=====================================+" << endl;
            cout << "Comenzando partida...\n"
                 << endl;
            break;
        case 2:
            cout << "+=====================================+" << endl;
            cout << "|          ESTADISTICAS               |" << endl;
            cout << "+=====================================+" << endl;
            cout << "Mostrando estadisticas...\n";
            break;
        case 3:
            cout << "+=====================================+" << endl;
            cout << "|            CREDITOS                 |" << endl;
            cout << "+=====================================+" << endl;
            cout << "Creditos del juego...\n";
            break;
        case 0:
            // Llamamos a la función y actualizamos la variable salir
            salir = confirmarSalida();
            break;
        default:
            cout << "Opcion invalida. Intenta de nuevo." << endl;
        }
    } while (!salir); // El bucle sigue mientras salir sea false

    return 0;
}