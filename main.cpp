#include "mbed.h"
// Include our home-made motor driver - he's called Ernie
#include "tb6612.h"

// Define motor pins globally
/* DigitalOut dir1(D2);
DigitalOut dir2(D3);
PwmOut pwm(D4);
*/

// Define global variables to make calling the new function easier
DigitalOut g_dir1 = D2;
DigitalOut g_dir2 = D3;
PwmOut g_pwm = D4;

int main() {
    while (true) {
        setMotorSpeed(g_dir1, g_dir2, g_pwm, 1.0);
        thread_sleep_for(1000);
        setMotorSpeed(g_dir1, g_dir2, g_pwm, 0.0);
        thread_sleep_for(1000);
        setMotorSpeed(g_dir1, g_dir2, g_pwm, -0.5);
        thread_sleep_for(1000);
        setMotorSpeed(g_dir1, g_dir2, g_pwm, 0);
        thread_sleep_for(1000);
    }
}