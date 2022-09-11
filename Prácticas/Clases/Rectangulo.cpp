
#include "Rectangulo.h"


//Constructor.
Rectangulo::Rectangulo(int _largo, int _ancho) {
    largo = _largo;
    ancho = _ancho;
}


//Método - Area.
int Rectangulo::area() {
    return (largo * ancho);
}


//Método - Perímetro.
int Rectangulo::perimetro() {
    return (2 * (largo + ancho));
}