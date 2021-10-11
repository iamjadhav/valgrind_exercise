/**
 * @file AnalogSensor.cpp
 * @author Aditya Jadhav (amjadhav@umd.edu)
 * @brief Class AnalogSensor definitions
 * @version 0.1
 * @date 2021-10-08
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "../include/AnalogSensor.hpp"
#include <numeric>
#include <vector>

/**
 * @brief Construct a new Analog Sensor:: Analog Sensor object
 * @param samples 
 */
AnalogSensor::AnalogSensor(unsigned int samples) : mSamples(samples) {}

/**
 * @brief Destroy the Analog Sensor:: Analog Sensor object
 */
AnalogSensor::~AnalogSensor() {}

/**
 * @brief reading the analog values of the sensor
 * @return int 
 */
int AnalogSensor::Read() {
    std::vector<int> *readings = new std::vector<int>(mSamples, 10);
    double result = std::accumulate(readings -> begin(), readings -> end(), 0.0) / readings -> size();
    delete readings;
    return result;
}
