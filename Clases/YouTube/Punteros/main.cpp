
/* ------------------------------- Inclusiones ------------------------------ */

#include <conio.h>
#include <iostream>
using namespace std;



/* ---------------------------- Código Principal ---------------------------- */

int main() {
    system ("chcp 65001 > nil");
    
    int numero, *dirNumero; //El puntero le indica al compilador que guardara una dirección.

    numero = 20;
    dirNumero = &numero;

    cout << "Numero: " << *dirNumero << endl;
    cout << "Dirección de memoria: " << dirNumero << endl;
    return 0;
}
