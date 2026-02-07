#include <iostream>
using namespace std;

class Reloj{
    private:
        int horaReloj = 0;
    public:
    // Funcion que establece la hora
        void establecerNumeroHora ( int hora ){
            horaReloj = hora;
        }

    // Funcion que obtiene el numero de hora
        int obtenerNumeroHora () const{
            return horaReloj;
        }
    // Funcion que muestra el numero de hora
        void mostrarHora () const{
            // Esta instruccion llama a obtenerNumeroHora para obtener el numero de hora que representa el Reloj
            cout << "Bienvenido al reloj, la hora es: " << obtenerNumeroHora() << "!" << endl;
            
        }
};

int main(){
    int horadeReloj;
    Reloj miReloj;  // Creamos un objeto Reloj llamado miReloj

    // Mostramos el valor inicial de horaReloj
    cout << "La hora inicial es: " << miReloj.obtenerNumeroHora() << endl;

    // Pide, Recibe y Establece el numero de Hora
    cout << "Escriba que hora es: "; cin >> horadeReloj;

    miReloj.establecerNumeroHora(horadeReloj);

    cout << endl;
    miReloj.mostrarHora(); // muestra un mensaje con la nueva hora


    return 0;
}