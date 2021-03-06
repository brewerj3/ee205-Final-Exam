///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  Final_Exam - EE 205 - Spr 2022
///
/// @file Rectangle.h
/// @version 1.0
///
/// @author Joshua Brewer <brewerj3@hawaii.edu>
/// @date   13_May_2022
///////////////////////////////////////////////////////////////////////////////

#pragma once

#include "Shape.h"

class Rectangle: public Shape{
protected:
    double length;
    double width;

public:
    Rectangle(double newLength, double newWidth);

    // Getters
    double getLength() const;

    double getWidth() const;

    // Compute method
    double compute_area() const override;

    // Just for fun
    __attribute__((unused)) bool checkForSquareness() const; //Check if a rectangle is also a square
};