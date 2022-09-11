
#include "Persona.h"


//Constructor - Inicializa los atributos.
Persona::Persona(int _edad, string _nombre) {
    edad = _edad;
    nombre = _nombre;
}


//Método - Leer.
void Persona::leer() {
    cout << "Soy " << nombre << " y estoy leyendo un libro.\n" << endl;
}


//Método - Correr.
void Persona::correr() {
    cout << "Soy " << nombre << " y estoy corriendo una maratón y tengo" << edad << "años.\n" << endl;
}