
#ifndef CLASSES_H
    /* ------------------------------ Definiciones ------------------------------ */
    
    #define CLASSES_H


    /* --------------------------------- Clases --------------------------------- */
    class Date {
        private: //Atributos.
            int day, month, year;

        public: //Métodos.
            Date(long); //Constructor - 1.
            Date(int, int, int); //Constructor - 2.
            void showDate();
    };


    /* ------------------------- Funciones Desarrolladas ------------------------ */

    //Constructor - 1.
    Date::Date (long date) {
        year = int (date/10000);
        month = int ((date - year * 10000) / 100);
        day = int (date - year * 10000 - month * 100);
    }


    //Constructor - 2.
    Date::Date (int _day, int _month, int _year) {
        year = _year;
        month = _month;
        day = _day;
    }


    void Date::showDate () {
        cout << "La date es: " << day << "/" << month << "/" << year << endl;
    }
#endif
