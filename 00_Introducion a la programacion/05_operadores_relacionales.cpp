#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 5, c = 10;
    
    cout << "a = " << a << ", b = " << b << ", c = " << c << endl << endl;
    
    // IGUALDAD (==) - ¿Son iguales?
    cout << "IGUALDAD (==):" << endl;
    cout << "a == b: " << (a == b) << " (false - 0)" << endl;    // 0
    cout << "a == c: " << (a == c) << " (true - 1)" << endl;     // 1
    
    // DIFERENTE (!=) - ¿Son diferentes?
    cout << "\nDIFERENTE (!=):" << endl;
    cout << "a != b: " << (a != b) << " (true - 1)" << endl;     // 1
    cout << "a != c: " << (a != c) << " (false - 0)" << endl;    // 0
    
    // MAYOR QUE (>)
    cout << "\nMAYOR QUE (>):" << endl;
    cout << "a > b: " << (a > b) << " (true - 1)" << endl;       // 1
    cout << "b > a: " << (b > a) << " (false - 0)" << endl;      // 0
    
    // MENOR QUE (<)
    cout << "\nMENOR QUE (<):" << endl;
    cout << "a < b: " << (a < b) << " (false - 0)" << endl;      // 0
    cout << "b < a: " << (b < a) << " (true - 1)" << endl;       // 1
    
    // MAYOR O IGUAL (>=)
    cout << "\nMAYOR O IGUAL (>=):" << endl;
    cout << "a >= b: " << (a >= b) << " (true - 1)" << endl;     // 1
    cout << "a >= c: " << (a >= c) << " (true - 1)" << endl;     // 1
    
    // MENOR O IGUAL (<=)
    cout << "\nMENOR O IGUAL (<=):" << endl;
    cout << "a <= b: " << (a <= b) << " (false - 0)" << endl;    // 0
    cout << "a <= c: " << (a <= c) << " (true - 1)" << endl;     // 1
    
    return 0;
}