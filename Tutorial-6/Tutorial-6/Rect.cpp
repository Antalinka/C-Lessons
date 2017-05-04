//
//  Rect.cpp
//  Tutorial-6
//
//  Created by Eugene Tretiakova on 2/3/16.
//  Copyright © 2016 Eugenya. All rights reserved.
//

#include "Rect.hpp"

Rectangle::Rectangle(int top, int left, int bottom, int right)
{
    itsTop = top;
    itsLeft = left;
    itsBottom = bottom;
    itsRight = right;
    
    itsUpperLeft.SetX(left);
    itsUpperRight.SetY(top);
    
    itsUpperRight.SetX(right);
    itsUpperRight.SetY(top);
    
    itsLowerLeft.SetX(left);
    itsLowerLeft.SetY(bottom);
    
    itsLowerRight.SetX(right);
    itsLowerRight.SetY(bottom);
    
}

int Rectangle::GetArea() const
{
    int Width = itsRight - itsLeft;
    int Height = itsTop - itsBottom;
    return (Width * Height);
}