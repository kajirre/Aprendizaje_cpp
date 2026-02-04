#include <iostream>
using namespace std;
int main(){
    int x = 5;

    // POST-incremento (usa el valor, luego incrementa)
    cout << "x = " << x << endl;
    cout << "x++ = " << x++ << endl; // muestra 5, luego luego x = 6
    cout << "Ahora x = " << x << endl << endl;

    // PRE-incremento (incremento, luego usa el valor)
    x = 5;
    cout << "x = " << x << endl;
    cout << "++x = " << ++x << endl; // x = 6, muestra 6
    cout << "Ahora x = " << x << endl << endl;

    // Lo mismo con decremento
    x = 5;
    cout << "x = " << x << endl;
    cout << "x-- = " << x-- << endl; // Muestra 5, luego x = 4
    cout << "x = " << x << endl;
    cout << "--x = " << --x << endl << endl;

    return 0;
}