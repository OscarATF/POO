#include <iostream>
#include <string>
using namespace std;

class Persona{
    private: //Atributos
        int edad;
        string nombre;
    public: //Metodos
        Persona(int,string); //Constructor
        void leer();
        void correr();
};

//Inicializador constructor
Persona::Persona(int _edad,string _nombre) {
    edad=_edad;
    nombre=_nombre;
}

void Persona::leer() {
    cout<<"Soy "<<nombre<<" y estoy leyendo\n";
}

void Persona::correr() {
    cout<<"Soy "<<nombre<<" y estoy corriendo\n";
}

int main() {
    Persona p1=Persona(20,"Oscar");

    p1.leer();

    system("pause");
    return 0;
}