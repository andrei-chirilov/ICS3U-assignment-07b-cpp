// Copyright (c) 2019 Andrei Chirilov All rights reserved.
//
// Created by: Andrei Chirilov
// Created on: December 2019
// This program get's number from user then turns it into a list of it's digits

#include <iostream>
#include <array>


template<size_t N>
std::array<std::string, 5> DigitMaker(std::array<std::string, N> inputList) {
    // Creating the variables
    std::array<std::string, 5> result;
    int numCounter = 0;
    // Process
    for (std::string counter : inputList) {
        result[numCounter] = counter;
        numCounter++;
    }
    return result;
}

main() {
    // This function checks if the entered number is the same as random number
    int digit = 0;
    std::string digitStr = "";
    std::array<std::string, 5> inputList;
    std::array<std::string, 5> result;

    // Process
    std::cout << "enter a number: ";
    std::cin >> digitStr;
    for (int counter = 0; counter < 5; counter++) {
        inputList[counter] = digitStr[counter];
    }
    // Pass the input to another function
    result = DigitMaker(inputList);

    std::cout << "[";
    for (std::string number : result) {
        // Output
        std::cout << number << + ", ";
    }
    std::cout << "]" << std::endl;
}
