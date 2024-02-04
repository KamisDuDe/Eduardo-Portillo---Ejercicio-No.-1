#include <iostream>
#include <cmath> // Incluye la librería cmath para poder utilizar funciones matemáticas

using namespace std;

// Declara las funciones que se utilizarán en el programa
int calculadora();
int calcularPotencia();
bool esPrimo();
int esBisiesto();

int main()
{

    int Imp;

    do
    {
        cout << "\t\t Laboratorio No. 3 \n" // Imprime el menú
             << endl;

        cout << "\t[1] Operadores y Variables.\n"
             << endl;
        cout << "\t[2] Potencias.\n"
             << endl;
        cout << "\t[3] Números Primos.\n"
             << endl;
        cout << "\t[4] Año Bisiesto.\n"
             << endl;

        cout << "\t  Elije una función:   \n"; // Lee la opción elegida por el usuario y llama cada función
        cin >> Imp;

        switch (Imp)
        {
        case 1:
            calculadora();
            break;

        case 2:
            calcularPotencia();
            break;

        case 3:
            esPrimo();
            break;

        case 4:
            esBisiesto();
            break;

        default:
            cout << "Opción incorrecta.\n"
                 << endl;
            break;
        }
    } while (Imp != 6); // Repite el bucle hasta que el usuario elija la opción 6

    system("pause");
    return 0;
}

// Define la función calculadora
int calculadora()
{
    char calc;
    float valor1;
    float valor2;

    cout << "Ingrese el primer dato: ";
    cin >> valor1;

    cout << "Ingrese el segundo dato: ";
    cin >> valor2;

    cout << "Selecciona la operacion (+, -, *, /): \n";
    cin >> calc;

    switch (calc)
    {
    case '+':
        cout << valor1 + valor2;
        break;

    case '-':
        cout << valor1 - valor2;
        break;

    case '*':
        cout << valor1 * valor2;
        break;

    case '/':
        if (valor2 != 0) // Verifica que el segundo valor no sea cero para evitar una división por cero
            cout << valor1 / valor2;
        else
            cout << "Error";
        break;

    default:
        cout << "Operador no valido." << endl;
    }
    return 0;
}

// Define la función calcularPotencia
int calcularPotencia()
{
    double base;
    int exponente;

    cout << "Ingrese la base: ";
    cin >> base;
    cout << "Ingrese el exponente: ";
    cin >> exponente;

    if (exponente == 0) // Si el exponente es cero, imprime el resultado de la potencia como 1
    {
        cout << "El resultado de " << base << " elevado a la " << exponente << " es: 1\n"
             << endl;
    }
    else if (exponente < 0) // Si el exponente es negativo, calcula la potencia utilizando la fórmula correspondiente
    {
        base = 1 / base;        // Toma el inverso de la base si el exponente es negativo
        exponente = -exponente; // Convierte el exponente negativo a positivo
    }

    double resultado = 1; // Inicializa la variable double resultado en 1 para cualquier valor de exponente

    for (int i = 0; i < exponente; i++) // Realiza un bucle for para calcular la potencia
    {
        resultado *= base; // Multiplica el resultado actual por la base en cada iteración del bucle
    }

    cout << "El resultado de " << base << " elevado a la " << exponente << " es: \n"
         << resultado << endl;
    return 0;
}

// Define la función esPrimo
bool esPrimo()
{
    int numero;
    cout << "Ingrese un número: ";
    cin >> numero;

    if (numero <= 1) // Si el número es menor o igual a 1, no es un número primo
    {
        cout << numero << " no es un número primo.\n"
             << endl;
        return false; // Devuelve false para indicar que el número no es primo
    }

    for (int i = 2; i <= sqrt(numero); i++) // Realiza un bucle for para verificar si el número es primo
    {
        if (numero % i == 0) // Si el número es divisible por algún valor entre 2 y su raíz cuadrada, no es un número primo
        {
            cout << numero << " no es un número primo.\n"
                 << endl;
            return false; // Devuelve false para indicar que el número no es primo
        }
    }

    cout << numero << " es un número primo." << endl;
    return true;
}

// Define la función esBisiesto
int esBisiesto()
{
    int anio;
    cout << "Ingresa el año: ";
    cin >> anio;

    if (anio % 4 == 0 && (anio % 100 != 0 || anio % 400 == 0)) // Verifica si el año es bisiesto utilizando las reglas correspondientes
    {
        cout << anio << " Es un año bisiesto\n"
             << endl;
    }
    else // Si el año no es bisiesto, imprime un mensaje correspondiente
    {
        cout << anio << " No es un año bisiesto\n"
             << endl;
    }

    return 0; // Termina la ejecución de la función esBisiesto
}