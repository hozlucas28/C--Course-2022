
#ifndef PERSON_H
    /* ------------------------------ Definiciones ------------------------------ */

    #define PERSON_H


    /* --------------------------------- Clases --------------------------------- */

    class Person {
        private: //Atributos.
            int age;
            string name;

        public: //Métodos.
            Person(int, string); //Constructor.
            void read();
            void run();
    };
#endif
