
/* ------------------------------- Inclusiones ------------------------------ */

#include "Person.h"



/* ------------------------- Funciones Desarrolladas ------------------------ */

//Constructor - Inicializa los atributos.
Person::Person(int _age, string _name) {
    age = _age;
    name = _name;
}


//Método - Leer.
void Person::read() {
    cout << "Soy " << name << " y estoy leyendo un libro.\n" << endl;
}


//Método - Correr.
void Person::run() {
    cout << "Soy " << name << " y estoy corriendo una maratón y tengo" << age << "años.\n" << endl;
}