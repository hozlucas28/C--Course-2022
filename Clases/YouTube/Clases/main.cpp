
/* ------------------------------- Inclusiones ------------------------------ */

#include <iostream>
#include <stdlib.h>
using namespace std;

//Propias.
#include "Persona.cpp"



/* ---------------------------- Código Principal ---------------------------- */

int main () { 
    //Primer método - Creación de un objeto.
    Persona p1 = Persona(21, "Alexis");

    //Segundo método - Creación de un objeto.
    Persona p2(18, "Juani");
    Persona p3(26, "Manuel");
    
    //Llamado a métodos.
    p1.leer();
    p2.correr();
    p3.leer();
    p3.correr();
    return 0;
}