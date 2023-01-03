
/* ------------------------------- inclusiones ------------------------------ */

#include <iostream>
#include <stdlib.h>
using namespace std;

//Propias.
#include "Rectangle.cpp"



/* ---------------------------- Código Principal ---------------------------- */

int main () {
    system ("chcp 65001 > nil");

    int firstArea, firstPerimeter, secondArea, secondPerimeter;
    Rectangle firstRectangle(12, 7); //Primer rectángulo.
    Rectangle secondRectangle(21, 14); //Segundo rectángulo.

    firstArea = firstRectangle.area();
    firstPerimeter = firstRectangle.perimeter();

    secondArea = secondRectangle.area();
    secondPerimeter = secondRectangle.perimeter();

    printf("Primer Rectángulo...\n");
    cout << "Área: " << firstArea << ".\n" << "Perímetro: " << firstPerimeter << ".\n" << endl;

    printf("Segundo Rectángulo...\n");
    cout << "Área: " << secondArea << ".\n" << "Perímetro: " << secondPerimeter << ".\n" << endl;
    return 0;
}