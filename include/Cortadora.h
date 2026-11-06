#ifndef CORTADORA_H
#define CORTADORA_H

#include "Maquina.h"

namespace planta {

class Cortadora : public Maquina {
private:
    void ejecutarCiclo() override;

public:
    explicit Cortadora(const std::string& nombre);
    ~Cortadora() override = default;

    int tiempoCicloSeg() const override;
};

}  

#endif