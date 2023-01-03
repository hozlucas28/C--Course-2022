
#ifndef MAIN_H
    /* ------------------------------ Definiciones ------------------------------ */

    #define MAIN_H


    /* --------------------------- Funciones Prototipo -------------------------- */

    void inputValues();
    void newValues(int*, int*);
    void showValues(const char[], int*);
    

    /* ------------------------- Funciones Desarrolladas ------------------------ */

    void newValues(int* number, int* numberToAdd) {
        (*number) += (*numberToAdd);
    }

    void showValues(const char message[], int* number) {
        cout << message << *number << endl;
    }
#endif
