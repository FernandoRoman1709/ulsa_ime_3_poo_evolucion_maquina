#include "InspeccionVisual.h"
#include <iostream>

InspeccionVisual::InspeccionVisual(const std::string& nombre) : Maquina(nombre) {}

int InspeccionVisual::tiempoCicloSeg() const {
    return 15; // Cumple el contrato: mayor que 0
}

void InspeccionVisual::procesar() {
    std::cout << getNombre() << ": inspeccionando pieza con camara\n";
    registrarPieza();                // Cumple el contrato: incrementa piezas
    agregarTiempo(tiempoCicloSeg()); // Cumple el contrato: suma tiempo de ciclo
}