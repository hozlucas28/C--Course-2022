
/* ------------------------------- Inclusiones ------------------------------ */

#include "Rectangle.h"



/* ------------------------- Funciones Desarrolladas ------------------------ */

//Constructor.
Rectangle::Rectangle(int _length, int _width) {
    length = _length;
    width = _width;
}


//Método - Area.
int Rectangle::area() {
    return (length * width);
}


//Método - Perímetro.
int Rectangle::perimeter() {
    return (2 * (length + width));
}