///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  Final_Exam - EE 205 - Spr 2022
///
/// @file Rectangle.cpp
/// @version 1.0
///
/// @author Joshua Brewer <brewerj3@hawaii.edu>
/// @date   13_May_2022
///////////////////////////////////////////////////////////////////////////////

#include "Rectangle.h"

#include <iostream>

Rectangle::Rectangle(double newLength, double newWidth) {
    if(newLength <= 0){
        throw( std::invalid_argument("length and width must be graeter than 0") );
    }
    if(newWidth <= 0){
        throw( std::invalid_argument("length and width must be graeter than 0") );
    }
    length = newLength;
    width = newWidth;
}

double Rectangle::getLength() const {
    return length;
}

double Rectangle::getWidth() const {
    return width;
}

double Rectangle::compute_area() const {
    double area = getLength() * getWidth();
    return area;
}

__attribute__((unused)) bool Rectangle::checkForSquareness() const { // this works, although I want to add an operator replacement later
    if(getWidth() == getLength() ) {
        std::cout << "This Rectangle is also a square!" << std::endl;
        return true;
    }
    std::cout << "This Rectangle is not a Square." << std::endl;
    return false;
}
