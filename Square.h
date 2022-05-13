///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  Final_Exam - EE 205 - Spr 2022
///
/// @file Square.h
/// @version 1.0
///
/// @author Joshua Brewer <brewerj3@hawaii.edu>
/// @date   13_May_2022
///////////////////////////////////////////////////////////////////////////////

#pragma once

#include "Rectangle.h"

class Square: public Rectangle{
public:
    Square( double newSide ) : Rectangle(newSide, newSide);
};