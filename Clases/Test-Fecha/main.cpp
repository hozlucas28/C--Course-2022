
/* --------------------------------------------------------------------------
 * APUNTES:
 *          La líbreria, creada previamente, debe ser compilada para que los
 *          cambios tengan efecto en la aplicación.
 *
 *          <endl>: Cierra la línea de impresión.
 *
 *
 * IMPORTANTE:
 *             - Este archivo fue creado con: <New/Project.../Console application>
 *             - La líbreria debe estar linkeada a este proyecto accediendo al
 *               apartado: <Buil options/Linker settings/Add> y seleccionar el
 *               archivo '.a' ubicado en: <NOMBRE DEL PROYECTO/bin/Debug>.
-------------------------------------------------------------------------- */


/* ------------------------------- Inclusiones ------------------------------ */

#include <iostream>
#include "../Fecha/Fecha.h" //Incluye la líbreria creada.
using namespace std;


/* ---------------------------- Código Principal ---------------------------- */

int main() {
    Fecha fDefault;
    Fecha f(20, 8, 2022);
    Fecha fSuma = f.sumarDias(180);
    int difDias = f.diferenciaEnDias(fSuma);
    cout << 'Diferencia de dias: ' << difDias << endl;

    return 0;
};
