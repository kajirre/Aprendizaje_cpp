#include <iostream>
using namespace std;

int main(){
    int x = 5; //asignacion basica
    cout << "x = " << x <<endl;

    x += 3; // x = x + 3 = 8
    cout << "x += 3 -> " << x <<endl;

    x -= 2; // x = x - 2 = 6
    cout << "x -= 2 -> " << x <<endl;

    x *= 4; // x = x * 4 = 24
    cout << "x *= 4 -> " << x <<endl;

    x /= 3; // x = x / 3 = 8
    cout << "x /= 3 -> " << x <<endl;

    x %= 5; // x = x % 5 = 3
    cout << "x %= 5 -> " << x <<endl;
    // es 3 porque 5 cabe 1 vez en 8 y sobran 3

    return 0;
}