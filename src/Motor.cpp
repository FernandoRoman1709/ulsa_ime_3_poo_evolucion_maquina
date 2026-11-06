#include "Motor.h"

Motor::Motor(double velMax) : velocidadRpm(0.0), velocidadMaxRpm(velMax) {}

void Motor::fijarVelocidad(double rpm) {
    if (rpm >= 0.0 && rpm <= velocidadMaxRpm) {
        velocidadRpm = rpm;
    }
}

double Motor::getVelocidad() const {
    return velocidadRpm;
}