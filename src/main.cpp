#include "Fresadora.h"
#include "Maquina.h"
#include "Torno.h"

#include <iostream>
#include <string>

// Ejecuta varios ciclos de cualquier maquina de la planta.
void ejecutarTurno(Maquina& m, int ciclos) {
    for (int i = 0; i < ciclos; i++) {
        m.procesar();
    }
}

void imprimirFicha(const Maquina& m) {
    std::cout << "Ficha -> ";
    m.mostrarEstado();
}

int main() {
    
        Torno torno("Torno T-01");
    Fresadora fresadora("Fresadora F-01");

    ejecutarTurno(torno, 2);
    torno.piezasProcesadas = -5;
    imprimirFicha(torno);

    std::string codigo = "Fantasma";
    imprimirFicha(codigo);

    return 0;

}
