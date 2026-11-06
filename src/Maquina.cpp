#include "Maquina.h"
#include <iostream>

Maquina::Maquina(const std::string& nombre)
    : nombre(nombre), piezasProcesadas(0), tiempoTrabajadoSeg(0) {}

Maquina::~Maquina() {
    std::cout << "[Destruyendo Maquina]: " << nombre << "\n";
}

void Maquina::registrarPieza() {
    piezasProcesadas++;
}

void Maquina::agregarTiempo(int segundos) {
    if (segundos > 0) {
        tiempoTrabajadoSeg += segundos;
    }
}

double Maquina::capacidadPorHora() const {
    return 3600.0 / tiempoCicloSeg();
}

const std::string& Maquina::getNombre() const {
    return nombre;
}

int Maquina::getPiezasProcesadas() const {
    return piezasProcesadas;
}

int Maquina::getTiempoTrabajadoSeg() const {
    return tiempoTrabajadoSeg;
}

void Maquina::mostrarEstado() const {
    std::cout << nombre << " | piezas: " << piezasProcesadas
              << " | tiempo: " << tiempoTrabajadoSeg << " s"
              << " | capacidad: " << capacidadPorHora() << " pzas/h\n";
}