
/* ------------------------------- Inclusiones ------------------------------ */

#include <conio.h>
#include <iostream>
using namespace std;



/* ---------------------------- Código Principal ---------------------------- */

int main() {
    system ("chcp 65001 > nil");
    
    int number, *dirNumber; //El puntero le indica al compilador que guardara una dirección.

    number = 20;
    dirNumber = &number;

    cout << "Numero: " << *dirNumber << endl;
    cout << "Dirección de memoria: " << dirNumber << endl;
    return 0;
}
