#include <iostream>
#include <string>

using namespace std;

// Definición de la clase Estudiante
class Estudiante
{
private:
    string nombre;
    string apellido;
    int edad;
    int curso;

public:
    // Constructor
    Estudiante(string _nombre, string _apellido, int _edad, int _curso)
        : nombre(_nombre), apellido(_apellido), edad(_edad), curso(_curso) {}

    // Método para mostrar la información del estudiante
    void mostrarInformacion() const
    {
        cout << "Nombre: " << nombre << endl;
        cout << "Apellido: " << apellido << endl;
        cout << "Edad: " << edad << endl;
        cout << "Curso: " << curso << endl;
    }
};

int main()
{
    // Crear un estudiante y mostrar su información
    Estudiante estudiante("Eduardo", "Portillo", 20, 90);
    cout << "Información del Estudiante:" << endl;
    estudiante.mostrarInformacion();

    return 0;
}
