
/* --------------------------------------------------------------------------
 * APUNTES:
 *          Los tipos y clases comienzan con la primer letra en mayúscula.
 * 
 * 
 * IMPORTANTE:
 *             - Este archivo fue creado con: <New/Class...> desactivando
 *               el 'Hash destructor'.
-------------------------------------------------------------------------- */


#ifndef FECHA_H
    /* ------------------------------ DEFINICIONES ------------------------------ */

    #define FECHA_H    
    #define ANIO_BASE 1601 // La fecha base es 1/1/1601.


    /* --------------------------------- CLASES --------------------------------- */

    class Fecha {
        private:
            int diaRel;
            int dmADiaRel(int dia, int men, int anio) const;

        public:
            Fecha();
            Fecha(int dia, int mes, int anio);

            Fecha sumarDias(int dias) const; //'const' evita que me pise los datos del objeto.
            Fecha restarDias(int dias) const;
            int diaDeLaSemana() const;
            int diferenciaEnDias(Fecha fecha) const;
    };
#endif
