#include "Maquina.h"
#include "Torno.h"
#include "Fresadora.h"
#include <iostream>

void ejecutarTurno(Maquina& m, int ciclos) {
    for (int i = 0; i < ciclos; ++i) {
        m.procesar();
    }
}

int main() {
    Torno torno("Torno T-01");
    Fresadora fresadora("Fresadora F-01");

    torno.procesar();

    ejecutarTurno(torno, 2);
    ejecutarTurno(fresadora, 2);

    torno.mostrarEstado();
    fresadora.mostrarEstado();

    return 0;
}