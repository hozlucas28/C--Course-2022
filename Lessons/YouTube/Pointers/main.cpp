
/* ------------------------------- Inclusiones ------------------------------ */

#include <conio.h>
#include <iostream>
using namespace std;



/* ---------------------------- Código Principal ---------------------------- */

int main() {
    system ("chcp 65001 > nil");
    
    int number, *pNumber; //El puntero le indica al compilador que guardara una dirección.

    number = 20;
    pNumber = &number;

    cout << "Numero: " << *pNumber << endl;
    cout << "Dirección de memoria: " << pNumber << endl;
    return 0;
}
