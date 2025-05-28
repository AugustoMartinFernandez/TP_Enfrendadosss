    cout << endl;
    cout << "-----------------------------------------------------------------" << endl;
    cout << "Bienvenido, " << nombre << "!" << endl;
    do
    {
        cout << "\n--- Menu Principal ---\n";
        cout << "1) Jugar" << endl;
        cout << "2) Estadisticas" << endl;
        cout << "3) Creditos" << endl;
        cout << "-----------" << endl;
        cout << "0) Salir" << endl;
        cin >> opcionMenu;

        switch (opcionMenu)
        {
        case 1:
            cout << "Comenzando partida...\n"
                 << endl;
            break;
        case 2:
            cout << "Mostrando estadisticas...\n";
            break;
        case 3:
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