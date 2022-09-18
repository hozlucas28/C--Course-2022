
/* ------------------------------- inclusiones ------------------------------ */

#include <iostream>
#include <stdlib.h>
using namespace std;

//Propias.
#include "Rectangulo.cpp"



/* ---------------------------- Código Principal ---------------------------- */

int main () {
    system ("chcp 65001 > nil");

    int area1, perimetro1, area2, perimetro2;
    Rectangulo r1(12, 7); //Primer rectángulo.
    Rectangulo r2(21, 14); //Segundo rectángulo.

    area1 = r1.area();
    perimetro1 = r1.perimetro();

    area2 = r2.area();
    perimetro2 = r2.perimetro();

    printf("Primer Rectángulo...\n");
    cout << "Área: " << area1 << ".\n" << "Perímetro: " << perimetro1 << ".\n" << endl;

    printf("Segundo Rectángulo...\n");
    cout << "Área: " << area2 << ".\n" << "Perímetro: " << perimetro2 << ".\n" << endl;
    return 0;
}