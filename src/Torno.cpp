#include "Torno.h"
#include <iostream>

Torno::Torno(const std::string& nombre) : Maquina(nombre) {}

int Torno::tiempoCicloSeg() const {
    return 45;
}

void Torno::procesar() {
    std::cout << getNombre() << ": torneando pieza\n";
    registrarPieza();
    agregarTiempo(tiempoCicloSeg());
}