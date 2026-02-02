// este programa suma dos enteros
#include <iostream>
int main(){
    int numero1 = 0, numero2 = 0, suma = 0;

    std::cout << "ingrese el valor del primer numero: "; std::cin >> numero1;
    std::cout << "ingrese el valor del segundo numero: "; std::cin >> numero2;
    
    suma = numero1 + numero2;

    return 0;
}