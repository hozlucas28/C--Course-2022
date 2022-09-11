
#include <iostream>
#include <stdlib.h>
using namespace std;



#ifndef PERSONA_H
    #define PERSONA_H


    class Persona {
        private: //Atributos.
            int edad;
            string nombre;

        public: //Métodos.
            Persona(int, string); //Constructor.
            void leer();
            void correr();
    };
#endif
