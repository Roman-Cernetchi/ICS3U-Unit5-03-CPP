// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Roman Cernetchi
// Created on: January 2021
// This program converts level to percentage

#include <iostream>
#include <string>

int calculate_grade(std::string level) {
    // converts level to percentage
    float percentage;

    // process
    if (level == "4+") {
        percentage = 97;
    } else if (level == "4") {
        percentage = 90;
    } else if (level == "4-") {
        percentage = 83;
    } else if (level == "3+") {
        percentage = 78;
    } else if (level == "3") {
        percentage = 75;
    } else if (level == "3-") {
        percentage = 71;
    } else if (level == "2+") {
        percentage = 68;
    } else if (level == "2") {
        percentage = 65;
    } else if (level == "2-") {
        percentage = 61;
    } else if (level == "1+") {
        percentage = 58;
    } else if (level == "1") {
        percentage = 55;
    } else if (level == "1-") {
        percentage = 51;
    } else if (level == "R") {
        percentage = 30;
    } else {
        percentage = -1;
    }

    return percentage;
}

main() {
    // this function converts level to percentage
    int level;
    int gradeAsPercentage;
    std::string levelFromUser;

    // input
    std::cout << "Enter the level you want converted to a percentage: ";
    std::cin >> levelFromUser;
    std::cout << std::endl;

    try {
    // calls function
    gradeAsPercentage = calculate_grade(levelFromUser);

    if (gradeAsPercentage == -1) {
        std::cout << "Invalid input" << std::endl;
    } else {
        std::cout << "The percentage is " << gradeAsPercentage
                                    << "%" << std::endl;
    }
    } catch (std::invalid_argument) {
    std::cout << "" << std::endl;
    std::cout << "This was not a number." << std::endl;
    }
}
