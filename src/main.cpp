#include "ControlDeLinea.h"
#include "Torno.h"
#include "Fresadora.h"
#include "Pulidora.h"
#include "InspeccionVisual.h"
#include "BandaTransportadora.h"
#include "Cortadora.h"
#include <iostream>
#include <exception>

int main() {
    try {
        planta::ControlDeLinea linea;

        linea.agregar(new planta::Torno("Torno T-01"));
        linea.agregar(new planta::Fresadora("Fresadora F-01"));
        linea.agregar(new planta::Pulidora("Pulidora P-01"));
        linea.agregar(new planta::InspeccionVisual("Inspeccion I-01"));
        linea.agregar(new planta::BandaTransportadora("Banda B-01"));
        linea.agregar(new planta::Cortadora("Cortadora C-01"));

        linea.ejecutarTurno(2);

        std::cout << "\n";
        linea.imprimirReporte();

    } catch (const std::exception& e) {
        std::cout << "Error: " << e.what() << '\n';
        return 1;
    }

    return 0;
}