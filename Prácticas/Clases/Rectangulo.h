
#include <iostream>
#include <stdlib.h>
using namespace std;



#ifndef RECTANGULO_H
    #define RECTANGULO_H


    class Rectangulo {
        private: //Atributos.
            int largo;
            int ancho;
        
        public: //Métodos.
            Rectangulo(int, int); //Constructor.
            int area();
            int perimetro();
    };
#endif
