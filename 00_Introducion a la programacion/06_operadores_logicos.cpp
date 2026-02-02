#include <iostream>
using namespace std;

int main(){
    int edad = 18;
    bool tieneIdentificacion = true;
    int dinero = 50;

    cout << "Edad: " << edad << endl;
    cout << "Tiene ID: " << tieneIdentificacion << endl;
    cout << "Dinero $: " << dinero << endl << endl;

    // AND (&&) - TODAS deben ser verdaderas
    cout << "AND (&&): " << endl;
    bool puedeEntrar = (edad >= 18) && tieneIdentificacion;
    cout << "(edad >= 18) && tieneIdentificacion: " << puedeEntrar << endl;

    // OR (||) - AL MENOS UNA debe ser verdadera
    cout << "\nOR (||): " << endl;
    bool puedeComprar = (edad >= 18 || (dinero > 100));
    cout << "(edad >= 18) || (dinero > 100): " << puedeComprar << endl;

    // NOT (!) - Niega el valor
    cout << "\nNOT (!): " << endl;
    bool esMenor =! (edad >= 18);
    cout << "!(edad >= 18): "<< esMenor << " (Es menor de edad?)" << endl;


    return 0;
}