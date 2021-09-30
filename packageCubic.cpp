// Copyright (c) 2021 haokai All rights reserved
//
// Created by: Haokai
// Created on: Sept 2021
// This Program calculate weight and volume of package

#include <iostream>
#include <string>

int main() {
    // This Program calculate weight and volume of package

    std::string stringWeight;
    int numberWeight;
    std::string stringLength;
    int numberLength;
    std::string stringWidth;
    int numberWidth;
    std::string stringHeight;
    int numberHeight;

    int cubicVolume;

    // input
    std::cout << "Please enter weight of the package(kg): ";
    std::cin >> stringWeight;
    std::cout << "Please enter length of the package(cm): ";
    std::cin >> stringLength;
    std::cout << "Please enter width of the package(cm): ";
    std::cin >> stringWidth;
    std::cout << "Please enter height of the package(cm): ";
    std::cin >> stringHeight;
    std::cout << "" << std::endl;

    // process
    try {
        numberWeight = std::stoi(stringWeight);
        numberLength = std::stoi(stringLength);
        numberWidth = std::stoi(stringWidth);
        numberHeight = std::stoi(stringHeight);

        cubicVolume = numberLength * numberWidth * numberHeight;

        if (numberWeight <= 27 || cubicVolume <= 10000) {
            if (numberWeight <= 27) {
                if (cubicVolume <= 10000) {
                    // output
                    std::cout << "OK, we will accept the package." << std::endl;
                } else {
                    // output
                    std::cout << "Your package is too large." << std::endl;
                }
            } else {
                // output
                std::cout << "Your package is too heavy." << std::endl;
            }
        } else {
            // output
            std::cout << "Your package is too heavy and too large."
            << std::endl;
        }
    } catch (std::invalid_argument) {
        // output
        std::cout << "Your input is not a valid input." << std::endl;
    }

    std::cout << "\nDone." << std::endl;
}
