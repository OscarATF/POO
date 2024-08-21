#include <iostream>
#include <string>
using namespace std;

class Perro{
    private:
        string nombre,raza;
    public:
        Perro(string,string); //constructor
        ~Perro(); //destructor
        void mostrarDatos();
        void jugar();
};

//incializar constructor
Perro::Perro(string _nombre,string _raza) {
    nombre=_nombre;
    raza=_raza;
}

//inicializar destructor
Perro::~Perro(){
}

void Perro::mostrarDatos() {
    cout<<"Nombre: "<<nombre<<"\n";
    cout<<"Raza: "<<raza<<"\n";
}

void Perro::jugar() {
    cout<<"El perro "<<nombre<<" esta jugando"<<"\n";
}
int main(){
    Perro p1("boby","chitzu");

    p1.mostrarDatos();
    p1.jugar();

    p1.~Perro();

}