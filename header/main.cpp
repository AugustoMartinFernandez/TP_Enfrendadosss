#include "menu.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string nombre;
    cout << "Ingrese su nombre: ";
    getline(cin, nombre);

    int opcionMenu;
    bool salir = false;

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
        cout << "|   1) * Jugar con 2 jugadores        |" << endl;
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
        {
            mostrarSeccion("Enfrendados de a Dos!!!", "Has seleccionado jugar con 2 jugadores.\n");

            string jugador1, jugador2;
            cout << "Ingrese el nombre del Jugador 1: ";
            getline(cin, jugador1);
            cout << "Ingrese el nombre del Jugador 2: ";
            getline(cin, jugador2);

            cout << "\nJugadores listos para jugar:\n";
            cout << "Jugador 1: " << jugador1 << endl;
            cout << "Jugador 2: " << jugador2 << endl;
            cout << "\nLOGICA DE MIS COMPAS A CODIFICAR!!!\n";

            break;
        }
        case 2:
            mostrarSeccion("ESTADISTICAS", "Cargando estadisticas...\n");
            break;
        case 3:
            mostrarSeccion("CREDITOS", "Creditos del juego...\n");
            break;
        case 0:
            salir = confirmarSalida();
            break;
        default:
            cout << "Opcion invalida. Intenta de nuevo." << endl;
        }
    } while (!salir);

    return 0;
}
