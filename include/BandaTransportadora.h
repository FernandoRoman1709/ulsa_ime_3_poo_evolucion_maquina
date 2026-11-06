#ifndef BANDATRANSPORTADORA_H
#define BANDATRANSPORTADORA_H

#include "Maquina.h"
#include "Motor.h"

class BandaTransportadora : public Maquina {
private:
    Motor motor; // Composición: la banda TIENE UN motor

    void ejecutarCiclo() override;

public:
    explicit BandaTransportadora(const std::string& nombre);
    ~BandaTransportadora() override = default;

    int tiempoCicloSeg() const override;
};

#endif