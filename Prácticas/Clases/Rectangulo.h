
#ifndef RECTANGULO_H
    /* ------------------------------ Definiciones ------------------------------ */

    #define RECTANGULO_H


    /* --------------------------------- Clases --------------------------------- */
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
