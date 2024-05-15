#include <iostream>
#include <stack>
#include <queue>
#include <string>

using namespace std;

// Definición de la clase Tarea
class Tarea
{
private:
    string descripcion;

public:
    Tarea(const string &desc) : descripcion(desc) {}
    void mostrar() const
    {
        cout << descripcion << endl;
    }
};

// Prototipos de funciones para la interfaz del usuario
void agregarTarea(stack<Tarea> &, queue<Tarea> &);
void completarUltimaTarea(stack<Tarea> &);
void atenderTareaMasAntigua(queue<Tarea> &);
void mostrarTodasLasTareas(const stack<Tarea> &, const queue<Tarea> &);

int main()
{
    stack<Tarea> pilaTareas;
    queue<Tarea> colaTareas;
    int opcion = 0;

    do
    {
        system("cls"); // Limpiar la pantalla antes de mostrar el menú
        cout << "\t------------------------" << endl;
        cout << "\t       Opciones   " << endl;
        cout << "\t------------------------" << endl;
        cout << "1. Agregar\n";
        cout << "2. Completar\n";
        cout << "3. Atender\n";
        cout << "4. Mostrar\n";
        cout << "5. Salir\n";
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch (opcion)
        {
        case 1:
            agregarTarea(pilaTareas, colaTareas);
            break;
        case 2:
            completarUltimaTarea(pilaTareas);
            break;
        case 3:
            atenderTareaMasAntigua(colaTareas);
            break;
        case 4:
            mostrarTodasLasTareas(pilaTareas, colaTareas);
            break;
        case 5:
            cout << "Exit...\n";
            break;
        default:
            cout << "Vuelva a intentarlo.\n";
        }
    } while (opcion != 5);

    return 0;
}

// Implementación de las funciones de la interfaz del usuario
void agregarTarea(stack<Tarea> &pila, queue<Tarea> &cola)
{
    string descripcion;
    cout << "Ingrese la descripcion de la tarea: ";
    cin.ignore(); // Limpiar el buffer de entrada
    getline(cin, descripcion);
    Tarea nuevaTarea(descripcion);
    pila.push(nuevaTarea);
    cola.push(nuevaTarea);
    cout << "Tarea agregada exitosamente.\n";
}

void completarUltimaTarea(stack<Tarea> &pila)
{
    if (!pila.empty())
    {
        pila.pop();
        cout << "La ultima tarea ha sido completada.\n";
    }
    else
    {
        cout << "No hay tareas para completar.\n";
    }
}

void atenderTareaMasAntigua(queue<Tarea> &cola)
{
    if (!cola.empty())
    {
        cola.pop();
        cout << "La tarea mms antigua ha sido atendida.\n";
    }
    else
    {
        cout << "No hay tareas para atender.\n";
    }
}

void mostrarTodasLasTareas(const stack<Tarea> &pila, const queue<Tarea> &cola)
{
    stack<Tarea> copiaPila = pila;
    queue<Tarea> copiaCola = cola;

    cout << "Tareas en la pila (ultima tarea primero):\n";
    while (!copiaPila.empty())
    {
        copiaPila.top().mostrar();
        copiaPila.pop();
    }

    cout << "\nTareas en la cola (primera tarea primero):\n";
    while (!copiaCola.empty())
    {
        copiaCola.front().mostrar();
        copiaCola.pop();
    }
}
