
/* ------------------------------- Inclusiones ------------------------------ */

#include <conio.h>
#include <iostream>
using namespace std;



/* ---------------------------- Código Principal ---------------------------- */

int main() {
    system ("chcp 65001 > nil");

    int numbers[] = {1, 2, 3, 4, 5};
    int *pNumbers;

    pNumbers = numbers; //Cuando igualo a un arreglo este me devuelve la dirección de su primer elemento.

    for (int i = 0; i <= 4; i++) {
        cout << "Elemento del vector [" << i << "]: " << *pNumbers++ << endl;
    };

    printf("\n");
    for (int i = 0; i <= 4; i++) {
        cout << "Posiciones de memoria del vector [" << i << "]: " << pNumbers++ << endl;
    };
    return 0;
}
