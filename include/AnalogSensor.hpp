/**
 * @file AnalogSensor.hpp
 * @author Aditya Jadhav (amjadhav@umd.edu)
 * @brief Class AnalogSensor declaration
 * @version 0.1
 * @date 2021-10-08
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#pragma once

#include <iostream>

class AnalogSensor {
 public:
  explicit AnalogSensor(unsigned int samples);
  ~AnalogSensor();
  int Read();
 private:
    unsigned int mSamples;
};
