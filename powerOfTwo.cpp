// Copyright (c) 2022 Nicolas Riscalas All rights reserved.
//
// Created by: Nicolas Riscalas
// Created on: April 24 2022
// calculates the power of a range of numbers

///////////////////////////////////////////////////////////////
// LIBRARIES
///////////////////////////////////////////////////////////////
#include <iostream>
#include <cmath>
///////////////////////////////////////////////////////////////
// STD::SHORTCUTS
///////////////////////////////////////////////////////////////
using std::cout;
using std::cin;
using std::string;


int main() {
    // variables
    string userStr;
    int userInt, counter;
    // inputs
    cout << "Enter the range of numbers you wanted to be powered: ";
    cin >> userStr;
    // try catch
    try {
        userInt = std::stoi(userStr);
    } catch (std::invalid_argument) {
        cout << "You have to input an integer\n";
        main();
    }
    for (counter = 0; counter <= userInt; counter++) {
        cout << counter << "^2 = "<< pow(counter, 2) << "\n";
    }
}
