#include <iostream>
#include <string>   // ----> el programa usa la clase string estandar de c++
using namespace std;
class LibroCalificaciones{
    public:
        // funcion que establece el nombre del curso
        void establecerNombreCurso( string nombre ){
            nombreCurso = nombre; // almacena el nombre del curso en el objeto
        } 

        // Funcion que obtiene el nombre del curso
        string obtenerNombreCurso() const{
            return nombreCurso; // devuelve el nombreCurso del objeto
        }

        // Funcion que muestra un mensaje de bienvenida al usuario
        void mostrarMensaje() const{
            // Esta instruccion llama a obtenerNombreCurso para obtener el nombre del curso que representa este LibrocCalificaciones
            cout << "Bienvenido al libro de calificaciones para " << obtenerNombreCurso() << "!" << endl;
        } // fin fucnion mostrar mensaje
    private:
        string nombreCurso; // nombre del curso para este LibroCalificaciones
};

int main(){
    string nombreDelCurso;  // cadena de caracteres para almacenar nombre del curso
    LibroCalificaciones miLibroCalificaciones;  // crea un objeto llamado LibroCalificaciones llamado miLibroCalificaciones

    //muestra el valor inicial del nombreCurso
    cout << "El nombre inicial del curso es: " << miLibroCalificaciones.obtenerNombreCurso() << endl;

    //pide, recibe y establece el nombre del curso
    cout << "\n Escriba el nombre del curso: " << endl;
    getline (cin, nombreDelCurso);    // lee el nombre del curso con espacio en blanco 
    
    miLibroCalificaciones.establecerNombreCurso(nombreDelCurso);
    
    cout << endl;
    miLibroCalificaciones.mostrarMensaje();  // Muestra un mensaje con el nuevo nombre del curso

    return 0;
}