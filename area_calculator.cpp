// Copyright (c) 2021 Hussein Mansour All rights reserved
//
// Created by: Hussein Mansour
// Created on: Tue/May25/2021
// This program is a calculator for the area of a triangle


#include <iostream>


void CalculateArea(int length, int height) {
    // this function calculates the area of the triangle
    int areaOfTriangle;
    // process
    areaOfTriangle = (length*height)*0.5;
    // output
    std::cout << "\nThe area of the triangle is "<<
    areaOfTriangle << " cm²" << std::endl;
    std::cout << "\nDone." << std::endl;
}

int main() {
    // this function just calls other functions
    std::string lengthFromUser;
    std::string heightFromUser;
    int length;
    int height;
    // input
    std::cout << "Enter the base length of a triangle (cm): ";
    std::cin >> lengthFromUser;
    std::cout << "Enter the height of a triangle (cm): ";
    std::cin >> heightFromUser;
     try {
         length = std::stoi(lengthFromUser);
         height = std::stoi(heightFromUser);
         // call functions
         CalculateArea(length, height);
    }catch (std::invalid_argument) {
       std::cout << "\nInvalid Input" << std::endl;
       std::cout << "\nDone." << std::endl;
    }
}
