// copyright (c) 2026 all rights reserved
// Created by : Adrian Student
// Date : 28 OCT 2026
// This program asks the user for a year and then determine
// if that year is a leap year or not then display result to user
#include <iostream>
#include <string>


int main() {
    // declare variables
    int yearInt;
    std::string yearStr;

    // get the user year
    std::cout << "Enter a year : ";
    std::cin >> yearStr;
    std::cout << "\n";

    // check if the user year is a leap year
    try {
        yearInt = std::stoi(yearStr);

        if (yearInt % 4 == 0) {
            if (yearInt % 100 == 0) {
                if (yearInt % 400 == 0) {
                    std::cout << yearStr << " is a leap year" << std::endl;
                } else {
                    std::cout << yearStr << " is not a leap year" << std::endl;
                }
            } else {
                std::cout << yearStr << " is a leap year" << std::endl;
            }
        } else {
            std::cout << yearStr << " is not a leap year" << std::endl;
        }
    } catch(std::invalid_argument) {
        std::cout << yearStr << " is not a valid year" << std::endl;
    }
    std::cout << "Thank you for playing" << std::endl;
}
