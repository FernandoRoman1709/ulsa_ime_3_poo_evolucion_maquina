#include "ControlDeLinea.h"
#include "Torno.h"
#include "Fresadora.h"
#include "Pulidora.h"
#include "InspeccionVisual.h"
#include <iostream>
#include <exception>

int main() {
    try {
        ControlDeLinea linea;

        linea.agregar(new Torno("Torno T-01"));
        linea.agregar(new Fresadora("Fresadora F-01"));
        linea.agregar(new Pulidora("Pulidora P-01"));
        linea.agregar(new InspeccionVisual("Inspeccion I-01"));

        linea.ejecutarTurno(2);

        std::cout << "\n";
        linea.imprimirReporte();

    } catch (const std::exception& e) {
        std::cout << "Error: " << e.what() << '\n';
        return 1;
    }

    return 0;
}