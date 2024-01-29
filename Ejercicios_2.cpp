// Ejercicios #2 para practicar:

// 1. Escribe un programa que verifique si un nÃºmero ingresado por el usuario es par.
// 2. Crea un programa que determine si un aÃ±o ingresado es bisiesto o no.
// 3. Desarrolla un programa que solicite al usuario dos nÃºmeros y determine si son iguales.
// 4. Realiza un programa que pida al usuario su edad y verifique si es mayor de edad (18 aÃ±os o mÃ¡s).
// 5. Implementa un programa que evalÃºe si un estudiante aprobÃ³ un examen, considerando que la calificaciÃ³n de aprobaciÃ³n es 60 o mÃ¡s

#include <iostream>
#include <math.h>
#include <conio.h>

using namespace std;

int main()
{
    bool quit = false;
    int menu = 0;

    do
    {
        system("cls");
        cout << "\n\n------------Menu de Opciones------------" << endl;
        cout << "1. Numeros pares" << endl;
        cout << "2. Año bisiesto" << endl;
        cout << "3. Igualdad de numeros" << endl;
        cout << "4. Verificador de edad" << endl;
        cout << "5. Promedio de notas" << endl;

        cout << "Escoja una opcion: ";
        cin >> menu;

        switch (menu)
        {
        case 1:
        {
            int numero;
            cout << "Ingrese un número: ";
            cin >> numero;

            // Confirma si el número x, es divisible entre 2
            if (numero % 2 == 0)
            {
                cout << "El número " << numero << " es par" << endl;
            }
            else
            {
                cout << "El número " << numero << " no es par" << endl;
            }
            break;
        }

        case 2:
        {
            int Qweo;
            cout << "Ingresa el año: ";
            cin >> Qweo;
            if (Qweo % 4 == 0)
            {
                if (Qweo % 100 == 0)
                {
                    if (Qweo % 400 == 0)
                    {
                        cout << Qweo << " Es un año bisiesto";
                    }
                    else
                    {
                        cout << Qweo << " No es un año bisiesto";
                    }
                }
                else
                {
                    cout << Qweo << " Es un año bisiesto";
                }
            }
            else
            {
                cout << Qweo << " No es un año bisiesto";
            }
            break;
        }

        case 3:
        {
            int num1;
            int num2;

            cout << "Ingrese el primer número: ";
            cin >> num1;
            cout << "Ingrese el segundo número: ";
            cin >> num2;

            if (num1 != num2)
                cout << "No son iguales" << endl;
            else
                cout << "Son iguales" << endl;
            break;
        }

        case 4:
        {
            int edad;

            cout << "Ingresa tu edad: " << endl;
            cin >> edad;

            if (edad >= 18)
            {
                cout << "Eres mayor de edad" << endl;
            }
            else
            {
                cout << "Eres menor de edad" << endl;
            }
            break;
        }

        case 5:
        {
            int calificacion;
            cout << "Ingrese la calificación del estudiante: ";
            cin >> calificacion;

            if (calificacion >= 60)
            {
                cout << "Has aprobado" << endl;
            }
            else
            {
                cout << "Reprobaste" << endl;
            }
            break;
        }

        default:
            cout << "Opcion incorrecta." << endl;
            break;
        }
    } while (menu != 6);

    cout << "FIN DE PROGRAMA" << endl;
    return 0;
}
