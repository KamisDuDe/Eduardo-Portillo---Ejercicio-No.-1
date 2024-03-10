#include <iostream>
#include <string>

using namespace std;

// Definición de la clase Pelicula
class Pelicula
{
private:
    string titulo;
    string director;
    int anioLanzamiento;

public:
    // Constructor
    Pelicula(string _titulo, string _director, int _anioLanzamiento)
        : titulo(_titulo), director(_director), anioLanzamiento(_anioLanzamiento) {}

    // Método para mostrar la información de la película
    void mostrarInformacion() const
    {
        cout << "Título: " << titulo << endl;
        cout << "Director: " << director << endl;
        cout << "Año de Lanzamiento: " << anioLanzamiento << endl;
    }
};

int main()
{
    // Crear una película y mostrar su información
    Pelicula pelicula("La increíble vida de Walter Mitty", "Bell Stiller", 2013);
    cout << "Información de la Película:" << endl;
    pelicula.mostrarInformacion();

    return 0;
}
