#ifndef CONTROL_DE_LINEA_H
#define CONTROL_DE_LINEA_H

#include "Maquina.h"
#include <vector>

class ControlDeLinea {
private:
    std::vector<Maquina*> maquinas;

public:
    ControlDeLinea() = default;
    ~ControlDeLinea();

    void agregar(Maquina* maquina);
    void ejecutarTurno(int ciclos);
    void imprimirReporte() const;
};

#endif