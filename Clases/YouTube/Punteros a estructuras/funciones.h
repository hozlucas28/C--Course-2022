
/* ------------------------- Funciones Desarrolladas ------------------------ */

void pedirDatos() {
    cout << "Nombre de la persona: " << endl;
    cin.getline(punteroPersona->nombre, 30, '\n');

    cout << "Edad de la persona: " << endl;
    cin >> punteroPersona->edad;
}


void mostrarDatos(Persona* punteroPersona) {
    cout << "\nNombre ingresado: " << punteroPersona->nombre << endl;
    cout << "\nEdad ingresado: " << punteroPersona->edad << endl;
}