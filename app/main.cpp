/**
 * @file main.cpp
 * @author Aditya Jadhav (amjadhav@umd.edu)
 * @brief This program reads the analog values of the sensor
 * @version 0.1
 * @date 2021-10-08
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <iostream>
#include "../include/AnalogSensor.hpp"

int main() {
    AnalogSensor lightSensor(5);
    std::cout << "Averaged sensor reading: " << lightSensor.Read() << std::endl;
    bool terminator = true;
    if (terminator) {
        std::cout << "DONE" << std::endl;
    }
    return 0;
}
