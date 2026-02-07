// Difine la clase LibroCalificaciones con una funcion miembro que recibe un parametro

#include <iostream>
#include <string>   // ----> el programa usa la clase string estandar de c++
using namespace std;

// Definicion de la clase LibroCalificaciones
class LibroCalificaciones{
    public:
        //la funcion quie muestra el mensaje de bienvenida para el usuario de LibroCalificaciones
        void mostrarMensaje(string nombreCurso) const{
            cout << "Bienvenido al libro de calificaciones para " << nombreCurso << "!" << endl;
        } // fin fucnion mostrar mensaje
};


int main(){

    string nombreDelCurso; 
    LibroCalificaciones milibroCalificaciones; // se crea un objeto libro calificaciones llamado milibrocalificaciones

    // pide y recibe el nombre del curso como entrada
    cout << "Escriba el nombre del curso: " << endl;
    getline(cin, nombreDelCurso); // lee el nombre del curso con espacios en blanco
    cout << endl; // imprime una linea en blanco

    // llama a la funcion mostrarMensaje de miLibroCalificaciones
    // y pasa nombreDelCurso como argumento
    milibroCalificaciones.mostrarMensaje(nombreDelCurso);
    return 0;
}