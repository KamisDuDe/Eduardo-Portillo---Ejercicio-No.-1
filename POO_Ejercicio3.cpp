#include <iostream>

using namespace std;

// Definición de la clase Calculadora
class Calculadora
{
public:
    // Métodos para realizar operaciones matemáticas
    float suma(float num1, float num2)
    {
        return num1 + num2;
    }

    float resta(float num1, float num2)
    {
        return num1 - num2;
    }

    float multiplicacion(float num1, float num2)
    {
        return num1 * num2;
    }

    float division(float num1, float num2)
    {
        if (num2 != 0)
            return num1 / num2;
        else
        {
            cout << "Error: División por cero." << endl;
            return 0;
        }
    }
};

int main()
{
    // Crear una calculadora y realizar operaciones
    Calculadora calc;
    float num1, num2;
    cout << "Ingrese el primer número: ";
    cin >> num1;
    cout << "Ingrese el segundo número: ";
    cin >> num2;
    cout << "Suma: " << calc.suma(num1, num2) << endl;
    cout << "Resta: " << calc.resta(num1, num2) << endl;
    cout << "Multiplicacion: " << calc.multiplicacion(num1, num2) << endl;
    cout << "Division: " << calc.division(num1, num2) << endl;

    return 0;
}
