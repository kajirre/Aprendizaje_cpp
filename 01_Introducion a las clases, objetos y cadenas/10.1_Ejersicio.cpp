#include <iostream>
#include <string>
using namespace std;

class Guerrero{
    private:
        int vidaGuerrero = 0;
        int ataqueAlGuerreo = 0;
        std::string nombreGuerrero = "JUGADOR";
    public:
    //---------------------------------------------------------
        void establecerNombreGuerrero( std::string nombre){
            nombreGuerrero = nombre;
        }
        std::string obtenerNombreGuerrero() const{
            return nombreGuerrero;
        }
        void mostarNombre() const{
            std::cout << "\n El nombre del guerrero es: " << obtenerNombreGuerrero() << "\n" ;
        }
    //---------------------------------------------------------
        void establecerNumeroVida(int puntosVida){
            if (puntosVida >= 0){
                vidaGuerrero = puntosVida;
            }else{
                std::cout << " ERROR !! valor invalido, se conserva vida guerrero: " << vidaGuerrero;
            }
        }        
        int obtenerNumeroVida () const{
            return vidaGuerrero;
        }
        void mostrarVida () const{
            std::cout << " " << obtenerNombreGuerrero() << " su vida es: " << obtenerNumeroVida() << endl;
        }
    //---------------------------------------------------------
        void establecerNumeroDaño(int puntosDaño){
            std::cout << "\n";
            if (puntosDaño >= vidaGuerrero){
                std::cout << " Ha muerto ";
            }else{
                std::cout << " sigue vivo ";
            }
            vidaGuerrero = vidaGuerrero - puntosDaño;
            if (vidaGuerrero < 1){
                vidaGuerrero = 0;
            }          
        }

};

int main(){
    std::string nombreDelGuerrero;
    int vidaDelguerrero = 0, ataqueVida = 0;
    Guerrero miGuerrero;

    //mostrar el mensaje inicial de juego
    std::cout << "\n El nombre inicial del guerrero es: " << miGuerrero.obtenerNombreGuerrero() << "\n" ;
    std::cout << "\n La vida inicial del guerrero es: " << miGuerrero.obtenerNumeroVida() << "\n";

    // pide, recibe y establece el nuevo nombre del guerrero
    std::cout << "\n Escriba el nombre del Guerrero: ";
    getline (cin, nombreDelGuerrero);

    // pide, recibe y establece el numero de vida
    std::cout << " Digite el numero de vida: "; std::cin >> vidaDelguerrero;

    miGuerrero.establecerNumeroVida(vidaDelguerrero);
    miGuerrero.establecerNombreGuerrero(nombreDelGuerrero);
    miGuerrero.mostarNombre();

    //piede, recibe y establece el numero de ataque
    std::cout << " Digiete el numero de dano: "; std::cin >> ataqueVida;

    


    miGuerrero.mostarNombre();
    miGuerrero.mostrarVida();

    miGuerrero.establecerNumeroDaño(ataqueVida);
    miGuerrero.mostrarVida();

    return 0;
}