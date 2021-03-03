// Created by: Mr. Coxall
// Created on: Sep 2020
// This program calculates the area and perimeter of a circle
//    with radius 5cm

#include <iostream>
#include <cmath>

int main() {
	std::cout << "If a circle has a radius of 5cm: " << std::endl;
    std::cout << std::endl;
    std::cout << "Area is " << (M_PI * pow(5, 2)) << "cm²." << std::endl;
    std::cout << "Perimeter is " << (2 * M_PI * 5) << "cm." << std::endl;
    std::cout << std::endl;
    std::cout << "Done." << std::endl;
}
