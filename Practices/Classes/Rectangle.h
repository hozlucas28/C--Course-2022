
#ifndef RECTANGLE_H
    /* ------------------------------ Definiciones ------------------------------ */

    #define RECTANGLE_H


    /* --------------------------------- Clases --------------------------------- */
    class Rectangle {
        private: //Atributos.
            int length;
            int width;
        
        public: //Métodos.
            Rectangle(int, int); //Constructor.
            int area();
            int perimeter();
    };
#endif
