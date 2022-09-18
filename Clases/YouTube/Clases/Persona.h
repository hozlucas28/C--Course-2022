
#ifndef PERSONA_H
    /* ------------------------------ Definiciones ------------------------------ */

    #define PERSONA_H


    /* --------------------------------- Clases --------------------------------- */

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
