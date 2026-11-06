#ifndef FRESADORA_H
#define FRESADORA_H

#include "Maquina.h"

class Fresadora : public Maquina {
public:
    explicit Fresadora(const std::string& nombre);
    ~Fresadora() override = default;

    void procesar() override;
    int tiempoCicloSeg() const override;
};

#endif