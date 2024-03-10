#include <iostream>
#include <string>

using namespace std;

// Definición de la clase Libro
class Libro
{
private:
    string titulo;
    string autor;
    int anioPublicacion;

public:
    // Constructor
    Libro(string _titulo, string _autor, int _anioPublicacion)
        : titulo(_titulo), autor(_autor), anioPublicacion(_anioPublicacion) {}

    // Método para mostrar la información del libro
    void mostrarInformacion() const
    {
        cout << "Título: " << titulo << endl;
        cout << "Autor: " << autor << endl;
        cout << "Año de Publicación: " << anioPublicacion << endl;
    }
};

int main()
{
    // Crear un libro y mostrar su información
    Libro libro("Dune", "Frank Herbert", 1965);
    cout << "Información del Libro:" << endl;
    libro.mostrarInformacion();

    return 0;
}
