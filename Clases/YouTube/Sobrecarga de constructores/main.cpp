
/* ------------------------------- Inclusiones ------------------------------ */

#include <stdlib.h>
#include <iostream>
using namespace std;

//Propias.
#include "Clases.h"



/* ---------------------------- Código Principal ---------------------------- */

int main() {
    system ("chcp 65001 > nil");

    Fecha hoy(21, 9, 2022);
    Fecha ayer(20220920);

    hoy.mostrarFecha();
    ayer.mostrarFecha();
    return 0;
}
