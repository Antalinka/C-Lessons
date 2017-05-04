//
//  Rect.hpp
//  Tutorial-6
//
//  Created by Eugene Tretiakova on 2/3/16.
//  Copyright © 2016 Eugenya. All rights reserved.
//

#ifndef Rect_hpp
#define Rect_hpp

#include <stdio.h>
#include <iostream>

struct Point {
public:
    void SetX(int x){itsX = x;}
    void SetY(int y){itsY = y;}
    int GetX() const{return itsX;}
    int GetY() const{return itsY;}
    
private:
    int itsX;
    int itsY;
};

struct Rectangle {
public:
    Rectangle(int top, int left, int bottom, int right);
    ~Rectangle(){}
    
    int GetTop()const {return itsTop;}
    int GetLeft()const {return itsLeft;}
    int GetBottom()const {return itsBottom;}
    int GetRight()const {return itsRight;}
    
    Point GetUpperLeft() const {return itsUpperLeft;}
    Point GetUpperRight() const {return itsUpperRight;}
    Point GetLowerLeft() const {return itsLowerLeft;}
    Point GetLowerRight() const {return itsLowerRight;}
    
    void SetUpperRight(Point Location) {itsUpperRight = Location;}
    void SetUpperLeft(Point Location) {itsUpperLeft = Location;}
    void SetLowerLeft(Point Location) {itsLowerLeft = Location;}
    void SetLowerRight(Point Location) {itsLowerRight = Location;}
    
    void SetTop(int top) {itsTop = top;}
    void SetLeft(int left) {itsLeft = left;}
    void SetBottom(int bottom) {itsBottom = bottom;}
    void SetRight(int right) {itsRight = right;}
    
    int GetArea() const;
private:
    Point itsUpperLeft;
    Point itsUpperRight;
    Point itsLowerLeft;
    Point itsLowerRight;
    int itsTop;
    int itsLeft;
    int itsBottom;
    int itsRight;
    
};


#endif /* Rect_hpp */
