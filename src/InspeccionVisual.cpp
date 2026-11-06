#include "InspeccionVisual.h"
#include <iostream>

InspeccionVisual::InspeccionVisual(const std::string& nombre) : Maquina(nombre) {}

int InspeccionVisual::tiempoCicloSeg() const {
    return 15;
}

void InspeccionVisual::ejecutarCiclo() {
    std::cout << getNombre() << ": inspeccionando pieza con camara\n";
}