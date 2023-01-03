
/* ------------------------- Funciones Desarrolladas ------------------------ */

void requestData() {
    cout << "Nombre de la persona: " << endl;
    cin.getline(pPerson->name, 30, '\n');

    cout << "Edad de la persona: " << endl;
    cin >> pPerson->age;
}


void showData(Person* pPerson) {
    cout << "\nNombre ingresado: " << pPerson->name << endl;
    cout << "\nEdad ingresado: " << pPerson->age << endl;
}