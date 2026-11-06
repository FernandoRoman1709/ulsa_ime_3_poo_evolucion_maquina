#ifndef TORNO_H
#define TORNO_H

#include "Maquina.h"

class Torno : public Maquina {
private:
    void ejecutarCiclo() override;

public:
    explicit Torno(const std::string& nombre);
    int tiempoCicloSeg() const override;
};

#endif