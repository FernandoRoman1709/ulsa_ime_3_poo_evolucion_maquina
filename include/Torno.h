#ifndef TORNO_H
#define TORNO_H

#include "Maquina.h"

class Torno : public Maquina {
public:
    explicit Torno(const std::string& nombre);
    ~Torno() override = default;

    void procesar() override;
    int tiempoCicloSeg() const override;
};

#endif