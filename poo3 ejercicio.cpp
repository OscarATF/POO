#include <iostream>
#include <string>

class Tiempo {
    private: //atributos
        int hora,minuto,segundo;
    public: //metodos
        Tiempo(int,int,int); //constructor1
        Tiempo(long); //constructor2
        void mostrarHora();
};
//Inicializar constructor1
Tiempo::Tiempo(int _hora,int _minuto,int _segundo) {
    hora=_hora;
    minuto=_minuto;
    segundo=_segundo;
}

Tiempo::Tiempo(long tiempo) {
    hora=int(tiempo/3600);
    minuto=int((tiempo%3600)/60);
    segundo=int((tiempo%3600)%60);
}

void Tiempo::mostrarHora() {
    std::cout<<hora<<":"<<minuto<<":"<<segundo<<"\n";
}

int main(){
    Tiempo t1(12,02,43);
    Tiempo t2(60000);
    t1.mostrarHora();
    t2.mostrarHora();
}

