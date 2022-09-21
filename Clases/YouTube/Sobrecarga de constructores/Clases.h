
#ifndef CLASES_H
    /* ------------------------------ Definiciones ------------------------------ */
    
    #define CLASES_H


    /* --------------------------------- Clases --------------------------------- */
    class Fecha {
        private: //Atributos.
            int dia, mes, anio;

        public: //Métodos.
            Fecha(long); //Constructor - 1.
            Fecha(int, int, int); //Constructor - 2.
            void mostrarFecha();
    };


    /* ------------------------- Funciones Desarrolladas ------------------------ */

    //Constructor - 1.
    Fecha::Fecha (long fecha) {
        anio = int (fecha/10000);
        mes = int ((fecha - anio * 10000) / 100);
        dia = int (fecha - anio * 10000 - mes * 100);
    }


    //Constructor - 2.
    Fecha::Fecha (int _dia, int _mes, int _anio) {
        anio = _anio;
        mes = _mes;
        dia = _dia;
    }


    void Fecha::mostrarFecha () {
        cout << "La fecha es: " << dia << "/" << mes << "/" << anio << endl;
    }
#endif
