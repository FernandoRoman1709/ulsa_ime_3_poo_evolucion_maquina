
#include "Fresadora.h"
#include <iostream>

namespace planta {

Fresadora::Fresadora(const std::string& nombre) : Maquina(nombre) {}

int Fresadora::tiempoCicloSeg() const {
    return 60;
}

void Fresadora::ejecutarCiclo() {
    std::cout << getNombre() << ": fresando pieza\n";
}

}  