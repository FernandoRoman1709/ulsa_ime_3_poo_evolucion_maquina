#include "Maquina.h"
#include "Torno.h"
#include "Fresadora.h"
#include <iostream>
#include <vector>

void ejecutarTurno(Maquina& m, int ciclos) {
    for (int i = 0; i < ciclos; ++i) {
        m.procesar();
    }
}

int main() {
    // Creación de una lista de máquinas en memoria dinámica (Heap)
    std::vector<Maquina*> taller;

    taller.push_back(new Torno("Torno T-01"));
    taller.push_back(new Fresadora("Fresadora F-01"));
    taller.push_back(new Torno("Torno T-02"));

    std::cout << "=== INICIO DE TURNO ===\n";
    for (Maquina* maquina : taller) {
        ejecutarTurno(*maquina, 2);
    }

    std::cout << "\n=== ESTADO DEL TALLER ===\n";
    for (const Maquina* maquina : taller) {
        maquina->mostrarEstado();
    }

    std::cout << "\n=== LIBERACIÓN DE MEMORIA ===\n";
    for (Maquina* maquina : taller) {
        delete maquina; // Invoca el destructor virtual
    }
    taller.clear();

    return 0;
}
