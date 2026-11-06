#ifndef MOTOR_H
#define MOTOR_H

namespace planta {

class Motor {
private:
    double velocidadRpm;
    double velocidadMaxRpm;

public:
    explicit Motor(double velMax);
    void fijarVelocidad(double rpm);
    double getVelocidad() const;
};

}  // namespace planta

#endif