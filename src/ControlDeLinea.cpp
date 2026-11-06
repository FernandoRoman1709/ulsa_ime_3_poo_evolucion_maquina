#include "ControlDeLinea.h"
#include <iostream>

namespace planta {

ControlDeLinea::~ControlDeLinea() {
    std::cout << "\n=== LIBERACIÓN DE MEMORIA (ControlDeLinea) ===\n";
    for (Maquina* m : maquinas) {
        delete m;
    }
    maquinas.clear();
}

void ControlDeLinea::agregar(Maquina* maquina) {
    if (maquina != nullptr) {
        maquinas.push_back(maquina);
    }
}

void ControlDeLinea::ejecutarTurno(int ciclos) {
    for (Maquina* m : maquinas) {
        for (int i = 0; i < ciclos; i++) {
            m->procesar();
        }
    }
}

void ControlDeLinea::imprimirReporte() const {
    int totalPiezas = 0;
    std::cout << "--- Reporte de la linea ---\n";
    for (const Maquina* m : maquinas) {
        m->mostrarEstado();
        totalPiezas += m->getPiezasProcesadas();
    }
    std::cout << "Total de piezas: " << totalPiezas << "\n";
}

}  // namespace planta