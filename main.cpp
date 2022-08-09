#include "mbed.h"

DigitalOut dir1(D2);
DigitalOut dir2(D3);
PwmOut pwm(D4);

void setMotorSpeed(float speed) {
    if (speed > 0) {
        dir1 = true;
        dir2 = false;
        pwm = speed;
    } else {
        dir1 = false;
        dir2 = true;
        pwm = -speed;
    }
}

int main() {
    while (true) {
        setMotorSpeed(1.0);
        thread_sleep_for(1000);
        setMotorSpeed(0.0);
        thread_sleep_for(1000);
        setMotorSpeed(-0.5);
        thread_sleep_for(1000);
        setMotorSpeed(0);
        thread_sleep_for(1000);
    }
}
