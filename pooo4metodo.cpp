#include <iostream>
using namespace std;

class Punto{
    private: //atributos
        int x,y;
    public: //metodos
        Punto(); //constructor
        void setPunto(int,int);
        int getPuntoX();
        int getPuntoY();
};
//INicializa cosntructor
Punto::Punto(){
}
//setter 
void Punto::setPunto(int _x,int _y){
    x=_x;
    y=_y;
}
//getter
int Punto::getPuntoX() {
    return x;
}

int Punto::getPuntoY() {
    return y;
}

int main() {
    Punto p1;
    p1.setPunto(2,5);
    cout<<p1.getPuntoX()<<endl;
    cout<<p1.getPuntoY()<<endl;
    return 0;
}