
/* ------------------------------- Inclusiones ------------------------------ */

#include <stdlib.h>
#include <iostream>
using namespace std;

//Propias.
#include "Classes.h"



/* ---------------------------- Código Principal ---------------------------- */

int main() {
    system ("chcp 65001 > nil");

    Date today(21, 9, 2022);
    Date yesterday(20220920);

    today.showDate();
    yesterday.showDate();
    return 0;
}
