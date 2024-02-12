#include <iostream> // Incluye la biblioteca iostream para habilitar operaciones de entrada/salida
#include <cmath>    // Incluye la biblioteca cmath para operaciones matemáticas

using namespace std;

// Declaración de la función
int OpMate(int dato1, int dato2, char mate);

int main() // El punto de entrada del programa
{
    char mate; // Almacena la operación matemática
    int dato1;
    int dato2;

    cout << "Ingrese el primer dato: ";
    cin >> dato1;

    cout << "Ingrese el segundo dato: ";
    cin >> dato2;

    cout << "Selecciona la operacion (+, -, *, /, %):\n";
    cin >> mate;

    int resultado = OpMate(dato1, dato2, mate); // Llama a la función OpMate y almacena el resultado en la variable resultado

    // Imprime el resultado
    cout << "\nEl resultado de la operacion es: " << resultado << endl;

    system("pause");
    return 0; // Devuelve desde la función main
}

// Definición de la función
int OpMate(int dato1, int dato2, char mate)
{
    switch (mate) // Evalúa el carácter mate
    {
    case '+':
        return dato1 + dato2;

    case '-':
        return dato1 - dato2;

    case '*':                 // Si la operación es multiplicación
        return dato1 * dato2; // Devuelve el producto de dato1 y dato2

    case '/':
        if (dato2 != 0) // Si dato2 es diferente de cero
            return dato1 / dato2;
        else
        {
            cout << "Error: Division por cero.\n";
            return 0; // Devuelve cero
        }

    case '%':           // Si la operación es módulo
        if (dato2 != 0) // Si dato2 es diferente de cero
            return dato1 % dato2;
        else // Si dato2 es igual a cero
        {
            cout << "Error: Division por cero.\n";
            return 0; // Devuelve cero
        }

    default: // Si la operación no es reconocida
        cout << "Opcion incorrecta." << endl;
        return 0;
    }
}