
/* ------------------------------- Inclusiones ------------------------------ */

#include <stdio.h>
#include <iostream>
using namespace std;

//Propias.
#include "main.h"



/* ---------------------------- Código Principal ---------------------------- */

int main() {
    system ("chcp 65001 > nil");

    int num, numASumar;
    int *punteroNum, *punteroNumASumar;

    cout << "Ingrese un número:" << endl;
    cin >> num;

    cout << "Al número " << num << " sumarle:" << endl;
    cin >> numASumar;

    punteroNum = &num;
    punteroNumASumar = &numASumar;

    mostrarValores("El número ingresado es ", punteroNum);
    nuevosValores(punteroNum, punteroNumASumar);
    mostrarValores("El número luego de ser sumado es ", punteroNum);
    return 0;
}
