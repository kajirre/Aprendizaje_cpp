

````cpp
std::cout (flujo de salida standard)
std::cin (flujo de entrada standard) Estos 3 pertenecen a la familia standard
std::cerr (flujo de error standard)
````
Estos 3 pertenecen a la familia standard

cuando se utiliza el:
````cpp
 using namespace std; 
 ````
Es como si gritara en una fiesta llena de gente: _"¡OIGAN TODOS LOS DE LA FAMILIA STANDARD, VENGAN ACÁ!"_.
en cambio escribir:

 ````cpp
 std::cout:
 ````
 Es como decir _"Quiero al señor `cout` de la familia `Standard`"_. 

SECUENCIAS DE ESCAPE
 ````cpp
    \n  --> nueva linea, coloca el cursor al inicio de la siguiente linea
    \t  --> tabulador horizontal, desplaza al cursos hasta la siguiente nivel de tabulacion
    \r  --> retorno de carro, coloca el cursor al inicio de la linea actual, no avanza a la siguiente linea
    \a  --> Alerta. suena la campana del sistema
    \\  --> barra diagonal inversa se usa para imprimir un caracter de barra diagonal inversa
    \'  --> comilla sencilla, se usa para imprimir un caracter de comilla sencilla
    \'' --> doble comilla, se usa para imprimir un caracter de doble comilla
 ````




