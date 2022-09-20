
#ifndef ESTRUCTURAS_H
    /* ------------------------------ Definiciones ------------------------------ */

    #define ESTRUCTURAS_H


    /* ------------------------------- Estructuras ------------------------------ */

    struct Persona {
        char nombre[30];
        int edad;
    } persona,*punteroPersona = &persona;


    /* --------------------------- Funciones Prototipo -------------------------- */
    
    void pedirDatos();
    void mostrarDatos(Persona*);
#endif
