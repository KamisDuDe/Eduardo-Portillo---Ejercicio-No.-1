#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    char calc;
    float valor1;
    float valor2;

    cout << "Ingrese el primer dato: " << endl;
    cin >> valor1;

    cout << "Ingrese el segundo dato: " << endl;
    cin >> valor2;

    cout << "Selecciona la operación (+, -, *, /)" << endl;
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
        if (valor2 != 0) // Por si no es igual a 0
            cout << valor1 / valor2;
        else
            cout << "Error";
        break;

    default:
        cout << "Error en la seleccion de operador" << endl;
    }
    system("pause");
    return 0;
}
