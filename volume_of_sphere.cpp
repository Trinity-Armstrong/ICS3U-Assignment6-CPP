// Copyright (c) 2019 Trinity Armstrong All rights reserved.
//
// Created by: Trinity Armstrong
// Created on: November 2019
// This program calculates the volume of a sphere

#include <cmath>
#include <iostream>
#include <iomanip>

float calculate(int radius) {
    // This function calculates the volume of a sphere

    // Variables
    const float pi = M_PI;
    float volume;

    // Process
    volume = (4*pi*(pow(radius, 3)))/3;
    return volume;
}

int main() {
    // This function gets the radius then outputs the answer

    // Variables
    int radiusFromUser;
    int heightFromUser;
    float volume;
    std::string radiusAsString;
    std::string heightAsString;

    // Input
    while (true) {
        std::cout << "Enter the radius of your sphere here (cm): " << std::endl;
        std::cin >> radiusAsString;
        std::cout << "" << std::endl;

        try {
            radiusFromUser = std::stoi(radiusAsString);
            volume = calculate(radiusFromUser);
            if (radiusFromUser == std::stoi(radiusAsString)) {
                // Output
                std::cout << "" << std::endl;
                std::cout << "The volume of the sphere is " << std::fixed \
                << std::setprecision(2) << std::setfill('0')\
                << volume << "cm³." << std::endl;
                break;
            } else {
                std::cout << "Error! Try again." << std::endl;
            }
        } catch (std::invalid_argument) {
            std::cout << "Error! Try again." << std::endl;
            std::cout << "" << std::endl;
        }
    }
}
