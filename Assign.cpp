// Created by: Shem
// Created on: 2025/11/30
// Copyright 2025 Shem
// This program finds numbers that can be added, subtracted,
// multiplied, or divided by 2 to get 45.

#include <iostream>

int main() {
    // Introduction
    std::cout << "These are numbers that can be added by 2, subtracted by 2,\n";
    std::cout << "divided by 2, and multiplied by 2 to output 45\n\n";

    // Addition
    for (int num1 = 1; num1 <= 45; num1++) {
        if (num1 + 2 == 45) {
            std::cout << num1 << " + 2 = " << num1 + 2 << std::endl;
        }
    }

    // Subtraction
    for (int num2 = 1; num2 <= 47; num2++) {
        if (num2 - 2 == 45) {
            std::cout << num2 << " - 2 = " << num2 - 2 << std::endl;
        }
    }

    // Division
    for (int num3 = 1; num3 < 100; num3++) {
        if (num3 / 2.0 == 45) {  // floating point division
            std::cout << num3 << " / 2 = " << num3 / 2.0 << std::endl;
        }
    }

    // Multiplication
    double num4 = 45.0 / 2.0;
    if (num4 * 2 == 45) {
        std::cout << num4 << " * 2 = " << num4 * 2 << std::endl;
    }
}
