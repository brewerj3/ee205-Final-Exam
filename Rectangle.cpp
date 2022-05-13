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
