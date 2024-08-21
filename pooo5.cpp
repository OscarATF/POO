#include <iostream>
#include <string> // Asegúrate de incluir esta biblioteca
using namespace std;

class Persona {
    private: // atributos
        string nombre;
        int edad;
    public: // métodos
        Persona(string, int); // constructor
        void mostrarPersona();
};

class Alumno : public Persona {
    private: // atributos
        string codigoAlumno;
        float notaFinal;
    public: // métodos
        Alumno(string, int, string, float); // constructor clase Alumno
        void mostrarAlumno();
};

// Implementación del constructor de la clase Persona
Persona::Persona(string _nombre, int _edad) {
    nombre = _nombre;
    edad = _edad;
}

// Implementación del constructor de la clase Alumno
Alumno::Alumno(string _nombre, int _edad, string _codigoAlumno, float _notaFinal) 
    : Persona(_nombre, _edad) { // Llamada al constructor de la clase base
    codigoAlumno = _codigoAlumno;
    notaFinal = _notaFinal;
}

// Implementación del método mostrarPersona de la clase Persona
void Persona::mostrarPersona() {
    cout << "Nombre: " << nombre << endl;
    cout << "Edad: " << edad << endl;
}

// Implementación del método mostrarAlumno de la clase Alumno
void Alumno::mostrarAlumno() {
    mostrarPersona(); // Llamar al método de la clase base
    cout << "Código de Alumno: " << codigoAlumno << endl;
    cout << "Nota Final: " << notaFinal << endl;
}

int main() {
    Alumno a1("Oscar", 20, "119064", 14.9);
    a1.mostrarAlumno();
    return 0;
}
