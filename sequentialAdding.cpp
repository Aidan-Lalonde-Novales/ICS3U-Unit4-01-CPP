// Copyright (c) 2022 Aidan Lalonde-Novales All rights reserved

// Created by Aidan Lalonde-Novales
// Created on 2022-04-10
// This program tells a user the sum of the sequential
// numbers preceding that of what they entered.

#include <iostream>
#include <string>

int main() {
    // this function determines sequential sum
    std::string timesToLoopString;
    int counter = 0;
    int sumCount = 0;
    int timesToLoop;

    // input
    std::cout << "Please enter a positive integer: ";
    std::cin >> timesToLoopString;

    // process & output
    try {
        timesToLoop = std::stoi(timesToLoopString);

        while (counter <= timesToLoop) {
            sumCount = sumCount + counter;
            counter = counter + 1;
        }
        std::cout << "The sum of all sequential numbers preceding " <<
        timesToLoop << " is " << sumCount << "." << std::endl;
    } catch (std::invalid_argument) {
        std::cout << "Your integer is invalid! Please try again." << std::endl;
    }
    std::cout << "\nDone." << std::endl;
}
