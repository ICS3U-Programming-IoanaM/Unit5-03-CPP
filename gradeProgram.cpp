// Copyright (c) 2022 Ioana Marinescu All rights reserved.
// Created By: Ioana Marinescu

// Date: Dec. 30, 2022
// a program that calculates a mark as a percentage with a given level


#include <iostream>


// calculates the mark according to the level
std::string calcMark(std::string level) {
    // level is a 4+
    if (level == "4+") {
        return "The mark is between 95% - 100%";

    // level is a 4
    } else if (level == "4") {
        return "The mark is between 87% - 94%";

    // level is a 4-
    } else if (level == "4-") {
        return "The mark is between 80% - 86%";

    // level is a 3+
    } else if (level == "3+") {
        return "The mark is between 77% - 79%";

    // level is a 3
    } else if (level == "3") {
        return "The mark is between 73% - 76%";

    // level is a 3-
    } else if (level == "3-") {
        return "The mark is between 70% - 72%";

    // level is a 2+
    } else if (level == "2+") {
        return "The mark is between 67% - 69%";

    // level is a 2
    } else if (level == "2") {
        return "The mark is between 63% - 66%";

    // level is a 2-
    } else if (level == "2-") {
        return "The mark is between 60% - 62%";

    // level is a 1+
    } else if (level == "1+") {
        return "The mark is between 57% - 59%";

    // level is a 1
    } else if (level == "1") {
        return "The mark is between 53% - 56%";

    // level is a 1-
    } else if (level == "1-") {
        return "The mark is between 50% - 52%";

        // level is an R
    } else if (level == "R") {
        return "The mark is less than 50%";

    // invalid input
    } else {
        return "Invalid input! Please enter a valid level.";
    }
}


int main() {
    // variables
    std::string userLevel, displayMark;

    // getting user input
    std::cout << "Enter the level (ex. 3+): ";
    std::cin >> userLevel;

    // calls function to calculate the mark
    displayMark = calcMark(userLevel);

    // displays the mark
    std::cout << displayMark << std::endl;
}
