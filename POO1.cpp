#include <iostream>
#include <string>
using namespace std;

class Rectangulo {
    private: //atributos
        int Lado;
        int Ancho;
    public: //metodos
        Rectangulo(int,int); //constructor
        void Area();
        void Perimetro();
};
//Inicializar constructor
Rectangulo::Rectangulo(int _Lado,int _Ancho){
    Lado=_Lado;
    Ancho=_Ancho;
}

void Rectangulo::Area(){
    cout<<"El area del rectangulo es: "<<Lado*Ancho<<endl;
}
void Rectangulo::Perimetro() {
    cout<<"El perimetro del rectangulo es: "<<2*(Lado+Ancho)<<endl;
}
int main(){
    Rectangulo p1=Rectangulo(10,5);
    p1.Area();
    p1.Perimetro();

    return 0;
}