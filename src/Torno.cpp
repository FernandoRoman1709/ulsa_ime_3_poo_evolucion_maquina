
#include "Torno.h"
#include <iostream>

Torno::Torno(const std::string& nombre) : Maquina(nombre) {}

int Torno::tiempoCicloSeg() const {
    return 45;
}

void Torno::ejecutarCiclo() {
    std::cout << getNombre() << ": torneando pieza\n";
}