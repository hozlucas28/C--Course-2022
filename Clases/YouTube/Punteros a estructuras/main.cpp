
/* ------------------------------- Inclusiones ------------------------------ */

#include <conio.h>
#include <iostream>
using namespace std;

#include "main.h"
#include "funciones.h"



/* ---------------------------- Código Principal ---------------------------- */

int main() {
    system ("chcp 65001 > nil");

    pedirDatos();
    mostrarDatos(punteroPersona);    
    return 0;
}
