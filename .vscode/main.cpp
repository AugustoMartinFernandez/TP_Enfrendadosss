#include "funciones.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
    // Variable para guardar nombre del usuario + otro jugador
    string jugador1, jugador2;
    // Pantalla de bienvenida inicial con estilo
    cout << "+=====================================+" << endl;
    cout << "|         BIENVENIDO A ENFRENDADOS    |" << endl;
    cout << "|           EL JUEGO DE DADOS         |" << endl;
    cout << "+=====================================+" << endl;
    cout << "|  Por favor, ingresa tu nombre para  |" << endl;
    cout << "|           comenzar a jugar           |" << endl;
    cout << "+-------------------------------------+" << endl;
    cout << "-> ";
    getline(cin, jugador1);

    // Variable para opcion de menu
    int opcionMenu;
    bool salir = false; // Inicializamos en False para cuando sea True Salga del menu
    cout << endl;
    cout << endl;

    cout << "   _______   ____________  _______   ______  ___ \t____  ____  _____\n";
    cout << "  / ____/ | / / ____/ __ \\/ ____/ | / / __ \\/   |  / __ \\/ __ \\/ ___/\n";
    cout << " / __/ /  |/ / /_  / /_/ / __/ /  |/ / / / / /| | / / / / / / /\\__ \\\n";
    cout << "/ /___/ /|  / __/ / _, _/ /___/ /|  / /_/ / ___ |/ /_/ / /_/ /___/ /\n";
    cout << "/_____/_/ |_/_/   /_/ |_/_____/_/ |_/_____/_/  |_/_____/____//____/\n";
    cout << endl;
    cout << endl;
    cout << endl;
    cout << "+---------------------------------------------------------------------------------------+" << endl;
    cout << "| Bienvenido, " << jugador1 << " Preparate para tirar los dados y demostrar tu suerte.  |" << endl;
    cout << "+---------------------------------------------------------------------------------------+" << endl;
    system("pause"); // Pausa despues de mostrar bienvenida

    do
    {
        cout << endl;
        cout << "+=====================================+" << endl;
        cout << "|      MENU PRINCIPAL DEL JUEGO       |" << endl;
        cout << "|-------------------------------------|" << endl;
        cout << "|   1) --> Jugar con 2 jugadores      |" << endl;
        cout << "|   2) --> Estadisticas               |" << endl;
        cout << "|   3) --> Creditos                   |" << endl;
        cout << "|-------------------------------------|" << endl;
        cout << "|   0) --> Salir                      |" << endl;
        cout << "+=====================================+" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcionMenu;
        cin.ignore(); // Limpiar el buffer para que getline funcione correctamente
        cout << "---------------------------------------------" << endl;

        switch (opcionMenu)
        {
        case 1:
        {
            mostrarSeccion("Enfrendados de a Dos", "Has seleccionado jugar con 2 jugadores.\n");

            // Pedimos el nombre del jugador nro 2
            cout << "+=====================================+" << endl;
            cout << "|   INGRESE NOMBRE DEL JUGADOR 2      |" << endl;
            cout << "+=====================================+" << endl;
            cout << "-> ";
            getline(cin, jugador2);

            // Mostramos los jugadores
            cout << "\n";
            cout << "+=====================================+" << endl;
            cout << "|      JUGADORES REGISTRADOS          |" << endl;
            cout << "|-------------------------------------|" << endl;
            cout << "--> Jugador 1: " << jugador1 << endl;
            cout << "--> Jugador 2: " << jugador2 <<endl;
            cout << "+=====================================+" << endl
                 << endl;

            system("pause"); // Pausa para que el usuario vea los nombres antes de continuar
            // Aca va la funcion del compañero designado
            cout << "\nLOGICA DE MIS COMPAS A CODIFICAR!!!\n";
            system("pause"); // Pausa antes de regresar al menú
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
            system("pause"); // Pausa para que el usuario vea el mensaje de error
        }
    } while (!salir);

    return 0;
}
