// Define la clase LibroCalificaciones con una funcion miembro llamada mostrarMensaje
// Crea un objeto LibroCalificaciones y llama a su funcion mostrarMensaje

#include <iostream>
using namespace std;

// Definicion de la clase LibroCalificaciones
class LibroCalificaciones{
public:
    // Funcion que muestra un mensaje de bienvenida para el usuario de LibroCalificaciones
    void mostrarMensaje() const{
        cout << "Bienvenido al Libro de Calificaciones !!" << endl;
    } // fin de la funcion mostrarMensaje
}; // fin de la clase LibroCalificaciones

// la funcion main empieza la ejecucion del programa 
int main(){
    LibroCalificaciones miLibroCalificaciones; // Creamos un objeto LibroCalificaciones llamado miLibroCalificaciones
    miLibroCalificaciones.mostrarMensaje(); // llama a la funcion mostrarMensaje del objeto
    
    return 0;
} // fin del main