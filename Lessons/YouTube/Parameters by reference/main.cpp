
/* ------------------------------- Inclusiones ------------------------------ */

#include <stdio.h>
#include <iostream>
using namespace std;

//Propias.
#include "main.h"



/* ---------------------------- Código Principal ---------------------------- */

int main() {
    system ("chcp 65001 > nil");

    int number, numberToAdd;
    int *pNumber, *pNumberToAdd;

    cout << "Ingrese un número:" << endl;
    cin >> number;

    cout << "Al número " << number << " sumarle:" << endl;
    cin >> numberToAdd;

    pNumber = &number;
    pNumberToAdd = &numberToAdd;

    showValues("El número ingresado es ", pNumber);
    newValues(pNumber, pNumberToAdd);
    showValues("El número luego de ser sumado es ", pNumber);
    return 0;
}
