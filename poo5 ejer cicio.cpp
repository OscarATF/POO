#include <iostream>
#include <string>
using namespace std;

class Persona{
    private: //atributos
        string nombre;
        int edad;
    public: //metodos
        Persona(string,int); //constructor padre
        void mostrarPersona();
};

class Empleado : public Persona{
    private:
        string codigoEmpleado;
        float sueldo;
    public:
        Empleado(string,int,string,float); //constructor hijo persona
        void mostrarEmpleado();
};

class Estudiante : public Persona{ 
    private:
        string codigoEstudiante;
        float notaFinal;
    public:
        Estudiante(string,int,string,float);
        void mostrarEstudiante();
};

class Universitario : public Estudiante{
    private:
        string universidad;
        int anio;
        int ciclo;
    public:
        Universitario(string,int,string,float,string,int,int); // Constructor corregido
        void mostrarUniversitario();
};

// Implementación de los constructores
Persona::Persona(string _nombre,int _edad) {
    nombre = _nombre;
    edad = _edad;
}

Empleado::Empleado(string _nombre,int _edad,string _codigoEmpleado,float _sueldo) : Persona(_nombre,_edad) {
    codigoEmpleado = _codigoEmpleado;
    sueldo = _sueldo;
}

Estudiante::Estudiante(string _nombre,int _edad,string _codigoEstudiante,float _notaFinal) : Persona(_nombre,_edad) {
    codigoEstudiante = _codigoEstudiante;
    notaFinal = _notaFinal;
}

Universitario::Universitario(string _nombre,int _edad,string _codigoEstudiante,float _notaFinal,string _universidad,int _anio,int _ciclo) 
: Estudiante(_nombre,_edad,_codigoEstudiante,_notaFinal) { // Inicializar correctamente la clase base
    universidad = _universidad;
    anio = _anio;
    ciclo = _ciclo;
}

// Implementación de los métodos mostrar
void Persona::mostrarPersona() {
    cout << "Nombre: " << nombre << endl;
    cout << "Edad: " << edad << endl;
}

void Empleado::mostrarEmpleado() {
    mostrarPersona();
    cout << "Codigo de Empleado: " << codigoEmpleado << endl;
    cout << "Sueldo: " << sueldo << endl;
}

void Estudiante::mostrarEstudiante() {
    mostrarPersona();
    cout << "Codigo de Estudiante: " << codigoEstudiante << endl;
    cout << "Nota Final: " << notaFinal << endl;
}

void Universitario::mostrarUniversitario() {
    mostrarEstudiante();
    cout << "Universidad: " << universidad << endl;
    cout << "Anio: " << anio << endl;
    cout << "Ciclo: " << ciclo << endl;
}

int main() {
    Estudiante p1("Oscar", 20, "2024-119064", 14.9);
    p1.mostrarEstudiante();

    Universitario u1("Ale", 23, "2022-119064", 16.5, "MIT", 2025, 4);
    u1.mostrarUniversitario();

    Empleado p2("yair",23,"2022022",2000.4);
    p2.mostrarEmpleado();

    return 0;
}
