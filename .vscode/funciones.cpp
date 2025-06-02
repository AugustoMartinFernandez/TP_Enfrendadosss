#include "funciones.h"
#include <iostream>
#include <string>

using namespace std;
/*
- Solicita al usuario que ingrese un nombre mostrando el mensaje indicado.
- Valida que el nombre no este vacío y repite la solicitud hasta que
- se ingrese un nombre valido.
El metodo .empty() verifica si una cadena de texto esta vacia.
- Retorna true si la cadena no contiene ningun caracter (longitud 0),
- y false si tiene uno o mas caracteres.
*/
string pedirNombre(string mensaje)
{
  string nombre;
  do
  {
    cout << mensaje;
    getline(cin, nombre);
    if (nombre.empty())
    {
      cout << "Debes ingresar un nombre valido. Intenta de nuevo.\n";
    }
  } while (nombre.empty());
  return nombre;
}

// Función para imprimir el banner en ASCII
void imprimirBanner()
{
  cout << "\n";
  cout << " _____ _   _ _____ ____  _____ _   _ ____   _    ____   ___  ____  \n";
  cout << "| ____| \\ | |  ___|  _ \\| ____| \\ | |  _ \\ / \\  |  _ \\ / _ \\/ ___| \n";
  cout << "|  _| |  \\| | |_  | |_) |  _| |  \\| | | | / _ \\ | | | | | | \\___ \\ \n";
  cout << "| |___| |\\  |  _| |  _ <| |___| |\\  | |_| / ___ \\| |_| | |_| |___) |\n";
  cout << "|_____|_| \\_|_|   |_| \\_\\_____|_| \\_|____/_/   \\_\\____/ \\___/|____/ \n";
  cout << "\n";
}

/*
 - Muestra en pantalla el menu principal del juego con las opciones disponibles.
 - Solicita al usuario que ingrese una opcion numerica y la retorna.
*/
int mostrarMenu()
{
  int opcionMenu;

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
  cout << "Seleccione una opcion con numeros: ";
  cin >> opcionMenu;
  cout << "---------------------------------------" << endl;

  return opcionMenu;
}

/*
 --> Imprime en consola un recuadro con el texto recibido en 'mensaje'
 --> seguido de "(S/N):", lee un caracter de la entrada estandar
 --> y lo retorna. Se utiliza para preguntas de confirmacion.
 */
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
/*
--> Pregunta al usuario si desea salir del programa, pidiendo confirmacion en dos pasos:
--> 1) "¿Quieres salir del programa?" (S/N)
--> 2) Si responde 'S', pregunta "¿Estás seguro?" (S/N)
-> Segun las respuestas, imprime mensajes de salida, cancelacion o
-> seguimiento, hace una pausa y devuelve true (para salir) o false.
 */
bool confirmarSalida()
{
  char letra = pedirLetra("Quieres salir del programa?");
  if (letra == 'S' || letra == 's')
  {
    // Segunda confirmacion
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
      return false; // Cancela en la segunda confirmacion
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
    return false; // Entrada invalida, no sale
  }
}
/*
--> Imprime en consola un recuadro con el 'titulo' pasado como parametro, centrado entre bordes,
--> seguido de un texto explicativo proporcionado en 'mensaje'. Luego llama a system("pause")
--> para que el usuario pueda leer el contenido antes de proseguir.
-> Texto principal que identifica la sección (por ejemplo, "ESTADISTICAS").
-> Texto adicional o subtitulo que aclara que está sucediendo en esa seccion.
*/
void mostrarSeccion(string titulo, string mensaje)
{
  cout << "+=====================================+" << endl;
  cout << "|------ " << titulo << " -------->" << endl;
  cout << "+=====================================+" << endl;
  cout << mensaje << endl;
  system(
      "pause"); // Pausa para que el usuario lea la seccion antes de continuar
}

void mostrarCreditos()
{
  cout << "+=====================================+" << endl;
  cout << "|             CREDITOS                |" << endl;
  cout << "+=====================================+" << endl;
  cout << "|    DESARROLLADO POR EL EQUIPO:      |" << endl;
  cout << "|              '12'                   |" << endl;
  cout << "+-------------------------------------+" << endl;
  cout << "|           INTEGRANTES:              |" << endl;
  cout << "+-------------------------------------+" << endl;
  cout << "--> Fernandez, Augusto Martin - Legajo: 12345    " << endl;
  cout << "--> Apellido, Nombre - Legajo: 12346    " << endl;
  cout << "--> Apellido, Nombre - Legajo: 12347    " << endl;
  cout << "--> Apellido, Nombre - Legajo: 12348    " << endl;
  cout << "+-------------------------------------+" << endl;
  cout << "|    DISTRIBUCION DEL TRABAJO:        |" << endl;
  cout << "+-------------------------------------+" << endl;
  cout << "-> Menu y Creditos: Fernandez Augusto Martin        " << endl;
  cout << "-> Logica del Juego: Apellido2       " << endl;
  cout << "-> Funciones de Dados: Apellido3     " << endl;
  cout << "-> Validaciones: Apellido4           " << endl;
  cout << "+-------------------------------------+" << endl;
  cout << "|    MATERIA: Programacion I          |" << endl;
  cout << "|    ANIO: 2025 - Primer Cuatrimestre |" << endl;
  cout << "+-------------------------------------+" << endl;
  cout << endl;
  system("pause");
}

// Función para contar la cantidad de dados
int contarDadosStock(int dadosStockJugador[], int sizeMax)
{
  int cantidad = 0;
  for (int i = 0; i < sizeMax; i++)
  {
    if (dadosStockJugador[i] != 0)
    {
      cantidad++;
    }
  }
  return cantidad;
}

// Mueve los dados seleccionados a los dados elegidos del jugador
void agregarDadosSeleccionados(int dadosStockJugador[], int indicesSeleccionados[], int &cantidadATomar, int dadosElegidosJugador[], int &cantidadElegidosJugador)
{
  for (int i = 0; i < cantidadATomar; i++)
  {
    int idx = indicesSeleccionados[i];
    dadosElegidosJugador[cantidadElegidosJugador++] = dadosStockJugador[idx];
  }
}

// Elimina los dados seleccionados del stock del jugador
void eliminarDadosSeleccionados(int dadosStockJugador[], int &cantidadStock, int indicesSeleccionados[], int &cantidadATomar)
{
  int stock[11];
  int j = 0;
  for (int i = 0; i < cantidadStock; i++)
  {
    bool esSeleccionado = false;
    for (int k = 0; k < cantidadATomar; k++)
    {
      if (i == indicesSeleccionados[k])
      {
        esSeleccionado = true;
        break;
      }
    }
    if (!esSeleccionado)
    {
      stock[j++] = dadosStockJugador[i];
    }
  }
  for (int i = 0; i < j; i++)
  {
    dadosStockJugador[i] = stock[i];
  }
  cantidadStock = j;
}

// Procesa el resultado de la jugada es decir asigna el puntaje.
void procesarResultado(
    int &suma, int &numeroObjetivo, int &cantidadATomar,
    int dadosStockJugador[], int &cantidadStock,
    int dadosElegidosJugador[], int &cantidadElegidosJugador,
    int dadosStockJugador2[], int &cantidadStock2,
    int puntosAcumulados[], int jugadorActual)
{
  if (suma == numeroObjetivo)
  {
    int puntaje = cantidadATomar * numeroObjetivo;
    puntosAcumulados[jugadorActual] += puntaje;
    cout << "¡Suma correcta! Has ganado " << puntaje << " puntos. Puntaje total: " << puntosAcumulados[jugadorActual] << endl;

    for (int i = 0; i < cantidadElegidosJugador; i++)
    {
      dadosStockJugador2[cantidadStock2++] = dadosElegidosJugador[i];
    }
    cantidadElegidosJugador = 0; 

    if (cantidadStock == 0)
    {
      cout << "¡Te quedaste sin dados! Has ganado la ronda y 10.000 puntos extra." << endl;
      puntosAcumulados[jugadorActual] += 10000;
    }
  }
  else
  {
    cout << "La suma no coincide. El rival te da un dado..." << endl;

    if (cantidadStock2 > 1)
    {
      int dado = dadosStockJugador2[--cantidadStock2];
      dadosStockJugador[cantidadStock++] = dado;
      cout << "El rival te da el dado: " << dado << endl;
    }
    else
    {
      cout << "El rival no tiene suficientes dados para darte uno." << endl;
    }
  }
}

// Función Selección de dados, ejemplo de su llamada a bajo en comentario:

// int dadosStockJugador1[11] = {1, 3, 5, 7, 8};
// int dadosStockJugador2[11] = {1, 3, 5, 7, 8};
// int puntosAcumulados[2] = {0, 0};
// int dadosElegidosJugador1[11] = {};
// int cantidadElegidosJugador1 = 0;
// int cantidadStockJugador1 = contarDadosStock(dadosStockJugador1, 11);
// int cantidadStockJugador2 = contarDadosStock(dadosStockJugador2, 11);
// int numeroObjetivo = 9;
// int suma =  0;


// Jugador 1 comienza a elegir su turno
// seleccionDeDados(dadosStockJugador1, cantidadStockJugador1, dadosStockJugador2, 
// cantidadStockJugador2, dadosElegidosJugador1, cantidadElegidosJugador1, puntosAcumulados, 0, numeroObjetivo);

void seleccionDeDados(int dadosStockJugador[], int &cantidadStock, int dadosStockJugador2[], int &cantidadStock2, int dadosElegidosJugador[], int &cantidadElegidosJugador, int puntosAcumulados[], int jugadorActual, int numeroObjetivo, int suma)
{
  cout << "Tu numero objetivo es: " << numeroObjetivo << endl;
  cout << "Tus dados stock son: ";
  for (int i = 0; i < cantidadStock; i++)
  {
    cout << "Ubicación [" << i << "]: valor: " << dadosStockJugador[i] << " ";
  }
  cout << endl;

  int cantidadATomar = 0;
  cout << "¿Cuántos dados quieres seleccionar? ";
  cin >> cantidadATomar;

  int indicesSeleccionados[11] = {};

  for (int i = 0; i < cantidadATomar; i++)
  {
    int index;
    cout << "Selecciona el índice del dado #" << i + 1 << ": ";
    cin >> index;

    if (index >= 0 && index < cantidadStock)
    {
      indicesSeleccionados[i] = index;
      suma += dadosStockJugador[index];
    }
    else
    {
      cout << "Índice inválido. Intenta de nuevo." << endl;
      i--;
    }
  }

  cout << "La suma de los dados seleccionados es: " << suma << endl;

  if (suma == numeroObjetivo)
  {
    cout << "¡Suma correcta! Has llegado al número objetivo" << endl;

    agregarDadosSeleccionados(dadosStockJugador, indicesSeleccionados, cantidadATomar, dadosElegidosJugador, cantidadElegidosJugador);
    eliminarDadosSeleccionados(dadosStockJugador, cantidadStock, indicesSeleccionados, cantidadATomar);
    procesarResultado(suma, numeroObjetivo, cantidadATomar, dadosStockJugador, cantidadStock, dadosElegidosJugador, cantidadElegidosJugador, dadosStockJugador2, cantidadStock2, puntosAcumulados, jugadorActual);
  }
  else
  {
    procesarResultado(suma, numeroObjetivo, cantidadATomar, dadosStockJugador, cantidadStock, dadosElegidosJugador, cantidadElegidosJugador, dadosStockJugador2, cantidadStock2, puntosAcumulados, jugadorActual);
  }
}