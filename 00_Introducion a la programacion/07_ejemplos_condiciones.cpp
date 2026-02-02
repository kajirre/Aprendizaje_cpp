#include <iostream>
using namespace std;

int main(){

    // EJEMPLO 1: CALIFICACIONES DE EXAMEN
    int calificacion;
    cout << "Ingrese calificacion (0-100): "; cin >> calificacion;

    if (calificacion >= 90){
        cout << "Excelente (A)" << endl;
    }else if (calificacion >= 80){
        cout << "Bueno (B)" << endl;
    }else if (calificacion >= 70){
        cout << "Regular (C)" << endl;
    }else if (calificacion >= 60){
        cout << "Aprobado (D)" << endl;
    }else{
        cout << "Reprobo (F)" << endl;
    }

    // EJEMPLO 2: NUMERO PAR O IMPAR
    int numero;
    cout << "\nIngrese un numero: "; cin >> numero;
    if (numero % 2 == 0){
        cout << numero << " Es par" << endl;
    }else{
        cout << "Es impar" << endl;
    }

    // EJEMPLO 3: RANGO DE VALORES
    int valor;
    cout << "\nIngrese un valor (1-100): "; cin >> valor;
    if (valor >=1 && valor <=100){
        cout << "Valor dentro del rango " << endl;
    }else{
        cout << "Valor fuera del rango " << endl;
    }

    // EJEMPLO 4: ACCESO CONDICIONAL MULTIPLE 
    bool esEstudiante = false;
    bool tienepermiso = true;

    if (esEstudiante || tienepermiso){
        cout << "\nAcceso concedido al laboratorio" << endl;
    }
    return 0;
}