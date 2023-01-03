
#ifndef STRUCTS_H
    /* ------------------------------ Definiciones ------------------------------ */

    #define STRUCTS_H


    /* ------------------------------- Estructuras ------------------------------ */

    struct Person {
        char name[30];
        int age;
    } person,*pPerson = &person;


    /* --------------------------- Funciones Prototipo -------------------------- */
    
    void requesData();
    void showData(Person*);
#endif
