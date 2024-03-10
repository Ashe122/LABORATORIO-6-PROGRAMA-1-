//Angelyn Judith Diaz Zeceña 5090-23-1407
//programa 1

#include <iostream>
#include <string>

using namespace std;

class Libro {
private:
    string titulo;
    string autor;
    int anoPublicacion;

public:
    // Aqui se utilizan los Constructores
    Libro(string t = "", string a = "", int ano = 0)
        : titulo(t), autor(a), anoPublicacion(ano) {}

    // Aqui se utilizan los métodos para establecer los datos
    void setTitulo(string t) {
        titulo = t;
    }

    void setAutor(string a) {
        autor = a;
    }

    void setAnoPublicacion(int ano) {
        anoPublicacion = ano;
    }

    // Aqui tambien se utilizan metodos
    string getTitulo() const {
        return titulo;
    }

    string getAutor() const {
        return autor;
    }

    int getAnoPublicacion() const {
        return anoPublicacion;
    }

    // Aqui se muestra la información del libro
    void mostrarInformacion() const {
        cout << "Titulo: " << titulo << endl;
        cout << "Autor: " << autor << endl;
        cout << "Ano de Publicacion: " << anoPublicacion << endl;
    }
};

int main() {
    // aqui se da la bienvenida al usuario
    cout << "-----Hola Personita,bienvenido a la Gestion de Libros en una Biblioteca-----" << endl;

    //  Aqui se le Solicita al usuario que ingrese los datos del libro
    string tituloLibro, autorLibro;
    int anoPublicacionLibro;

    cout << "\nIngrese el titulo del libro: ";
    getline(cin, tituloLibro);

    cout << "Ingrese el autor del libro: ";
    getline(cin, autorLibro);

    cout << "Ingrese el ano de publicacion del libro: ";
    cin >> anoPublicacionLibro;

    // aqui se crea una instancia de la clase Libro con los datos proporcionados por el usuario
    Libro miLibro(tituloLibro, autorLibro, anoPublicacionLibro);

    cout << "\nInformacion del Libro:" << endl;
    miLibro.mostrarInformacion();

    return 0; //Aqui finaliza la ejecucion del programa
}
