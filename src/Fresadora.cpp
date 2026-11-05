#include "Fresadora.h"

#include <iostream>

Fresadora::Fresadora(const std::string& nombre) : Maquina(nombre) {}

void Fresadora::procesar() {
    std::cout << nombre << ": freseando pieza \n";
    piezasProcesadas++;
    tiempoTrabajadoSeg +=60;
}
