
/* ------------------------------- Inclusiones ------------------------------ */

#include <iostream>
#include <stdlib.h>
using namespace std;

//Propias.
#include "Person.cpp"



/* ---------------------------- Código Principal ---------------------------- */

int main () { 
    //Primer método - Creación de un objeto.
    Person firstPerson = Person(21, "Alexis");

    //Segundo método - Creación de un objeto.
    Person secondPerson(18, "Juani");
    Person thirdPerson(26, "Manuel");
    
    //Llamado a métodos.
    firstPerson.read();
    secondPerson.run();
    thirdPerson.read();
    thirdPerson.run();
    return 0;
}