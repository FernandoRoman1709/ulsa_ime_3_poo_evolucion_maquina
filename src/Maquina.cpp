#include "Maquina.h"
#include <iostream>

Maquina::Maquina(const std::string& nombre)
    : nombre(nombre), piezasProcesadas(0), tiempoTrabajadoSeg(0) {}

void Maquina::registrarPieza() {
    piezasProcesadas++;
}

void Maquina::agregarTiempo(int segundos) {
    if (segundos > 0) {
        tiempoTrabajadoSeg += segundos;
    }
}

int Maquina::tiempoCicloSeg() const {
    return 10;
}

double Maquina::capacidadPorHora() const {
    return 3600.0 / tiempoCicloSeg();
}

void Maquina::procesar() {
    std::cout << nombre << ": procesamiento generico\n";
    registrarPieza();
    agregarTiempo(tiempoCicloSeg());
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
    std::cout << nombre << " | Piezas: " << piezasProcesadas
              << " | Tiempo: " << tiempoTrabajadoSeg << "s"
              << " | Capacidad: " << capacidadPorHora() << " pzas/h\n";
}