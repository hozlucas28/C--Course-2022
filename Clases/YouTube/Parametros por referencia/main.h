
#ifndef MAIN_H
    /* ------------------------------ Definiciones ------------------------------ */

    #define MAIN_H


    /* --------------------------- Funciones Prototipo -------------------------- */

    void ingresarValores();
    void nuevosValores(int*, int*);
    void mostrarValores(const char[], int*);
    

    /* ------------------------- Funciones Desarrolladas ------------------------ */

    void nuevosValores(int* num, int* numASumar) {
        (*num) += (*numASumar);
    }

    void mostrarValores(const char mensaje[], int* num) {
        cout << mensaje << *num << endl;
    }
#endif
