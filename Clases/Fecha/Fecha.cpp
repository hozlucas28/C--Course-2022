
/* --------------------------------------------------------------------------
 * APUNTES:
 *          Los tipos y clases comienzan con la primer letra en mayúscula.
 * 
 * 
 * IMPORTANTE:
 *             - Este archivo fue creado con: <New/Class...> desactivando
 *               el 'Hash destructor'.
-------------------------------------------------------------------------- */


/* ------------------------------- INCLUSIONES ------------------------------ */

#include "Fecha.h"


/* --------------------------- FUNCIONES PROTOTIPO -------------------------- */

Fecha::Fecha() {
    diaRel = 1;
};

Fecha::Fecha(int dia, int mes, int anio) {
    diaRel = dmADiaRel(dia, mes, anio); //Función imaginaria, de momento.
};

Fecha Fecha::sumarDias(int dias) const {
    Fecha fechaSuma;
    fechaSuma.diaRel = diaRel + dias;
    return fechaSuma;
};

Fecha Fecha::restarDias(int dias) const {
    Fecha fechaSuma;
    fechaSuma.diaRel = diaRel - dias;
    return fechaSuma;
};

int Fecha::diferenciaEnDias(Fecha fecha) const {
    return diaRel - fecha.diaRel;
};

//Tomamos como primer día de la semana al lunes, siendo la fecha base: 1/1/1601.
int Fecha::diaDeLaSemana() const {
    return (diaRel - 1) % 7;
};

Fecha::dmADiaRel(int dia, int mes, int anio) const {
    return 1;
};
