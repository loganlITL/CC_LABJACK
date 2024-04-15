#include "MotorDriver.h" // Include the appropriate header file for the motor controller
#include "ClearCore.h" // Include the main ClearCore header file

int main() {
    MotorDriver motor; // Create an instance of the MotorDriver class

    // Set the torque value
    double torque = 100; // This value will depend on the units used by your motor controller

    // Calculate the number of cycles based on the requirement (3 times a second for two weeks)
    int cycles = 3 * 60 * 60 * 24 * 14;

    // Main loop
    for (int i = 0; i < cycles; ++i) {
        // Apply torque in one direction
        motor.setTorque(torque);
        delay(167); // Delay for a third of a second

        // Apply torque in the opposite direction
        motor.setTorque(-torque);
        delay(167); // Delay for a third of a second
    }

    return 0;
}