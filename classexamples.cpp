//Programa con ejemplos de clases y subclases 
#include <iostream>
#include <stdio.h>
using namespace std;

class planetas {
    private: // atributos 
        string nombre;
        float radio;
    public: // metodos 
        planetas (string, float); //constructor
        void agua ();
        void atmosfera ();
        void No_agua ();
        void No_atmosfera ();
};
//inicializar atributos 
planetas::planetas (string nombre_, float radio_) {
    nombre = nombre_;
    radio = radio_;
};
void planetas::agua() {
    cout <<"El planeta: "<< nombre << ", con radio de " << radio << " Kilometros " << ", contiene agua."<< endl;
}
void planetas::atmosfera () {

    cout <<"El planeta: "<< nombre << ", con radio de " << radio << " Kilometros " << ", tiene atmosfera."<< endl;
}
void planetas::No_agua() {
    cout <<"El planeta: "<< nombre << ", con radio de " << radio << " Kilometros " << ", no contiene agua."<< endl;
}
void planetas::No_atmosfera () {

    cout <<"El planeta: "<< nombre << ", con radio de " << radio << " Kilometros " << ", no tiene atmosfera."<< endl;
}



int main () {
    planetas tierra = planetas ("tierra", 6371);
    planetas marte = planetas ("Marte", 3389);
    tierra.agua();
    tierra.atmosfera();
    marte.No_agua ();
    marte.No_atmosfera();
    return 0;
}