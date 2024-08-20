#include <iostream>
#include <string>

class Fecha{
    private: //Atributos
        int dia,mes,anio;
    public: //Metodos
        Fecha(int,int,int); //Constructor1
        Fecha(long); //Constructor2
        void mostrarFecha();
};
//Inicializa constructor1
Fecha::Fecha(int _dia,int _mes, int _anio) {
    anio=_anio;
    mes=_mes;
    dia=_dia;
}
//Inicializa constructor2
Fecha::Fecha(long fecha) {
    anio=int(fecha/10000); //Extraer anio
    mes=int((fecha-anio*10000)/100); //Extraer mes
    dia=int(fecha-anio*10000-mes*100); //Extraer dia
}
void Fecha::mostrarFecha() {
    std::cout<<"La fecha es: "<<dia<<"/"<<mes<<"/"<<anio;
}

int main() {
    Fecha hoy(9,1,2024);
    Fecha ayer(20240423);
    hoy.mostrarFecha();
    std::cout<<"\n";
    ayer.mostrarFecha();
    return 0;
}