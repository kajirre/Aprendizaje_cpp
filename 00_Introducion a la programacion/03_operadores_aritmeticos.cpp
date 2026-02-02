#include <iostream>
using namespace std;

int main(){
    int a = 10, b = 3;
    cout << "a: " << a << ", b: " << b << endl << endl;

    cout << "SUMA (+): a + b: " << a + b << endl;
    cout << "RESTA (-): a - b: " << a - b << endl;
    cout << "MULTIPLICACION (*): a * b: " << a * b << endl;
    cout << "DIVICION (/): a / b: " << a / b << endl;

    double x = 10.0, y = 3.0;
    cout << "Division real: x / y = " << x / y <<endl;

    cout << "MODULO (%): a % b: " << a % b << endl;
    // el modulo devuelve el RESTO de la division entera
    
    return 0;
}