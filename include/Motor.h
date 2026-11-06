#ifndef MOTOR_H
#define MOTOR_H

class Motor {
private:
    double velocidadRpm;
    double velocidadMaxRpm;

public:
    explicit Motor(double velMax);
    void fijarVelocidad(double rpm);
    double getVelocidad() const;
};

#endif