//
//  main.cpp
//  Tutorila-11HW
//
//  Created by Eugene Tretiakova on 2/5/16.
//  Copyright © 2016 Eugenya. All rights reserved.
//

#include <iostream>

/*class Animal
{
public:
    Animal(){};
    virtual ~Animal(){};
    virtual void SetWeight(int weight){
        std::cout << "Animal SetWeight\n";
        itsWeight = weight;
    }
    
protected:
    int itsWeight;
};

class Dog : public Animal
{
public:
    Dog(): count(0){};
    ~Dog(){};
    void SetWeight(int weight){
        
        std::cout << "Dog SetWeight\n";
        itsWeight = weight;
        count++;
    }
protected:
    int count;
};
*/

class Shape
{
    
};
class Rectangle : public Shape
{
public:
    Rectangle(int length, int width);
    virtual ~Rectangle(){std::cout << "Rectangle destructor...\n";};
    Rectangle(Rectangle & rhs);
    
    int itsLength;
    int itsWidth;
};

class Square : public Rectangle
{
public:

    Square(int length);
    Square(Square & rhs);
};

Rectangle::Rectangle(Rectangle & rhs)
{
    std::cout << "Rectangle copy constructor\n";
 
}
Square::Square(Square & rhs):
Rectangle(rhs)
{
    std::cout << "Square copy constructor\n";
}

Rectangle::Rectangle(int length, int width):
itsLength(length),
itsWidth(width)
{
    std::cout << "Rectangle constructor\n";
}

Square::Square(int length):
Rectangle(length,0)
{
    std::cout << "Square constructor\n";
}
void Function(Square Rect);

int main(int argc, const char * argv[]) {
    
   /* Dog myDog;
    myDog.SetWeight(45);
    */

    Square tempRect(3);
    Function(tempRect);
    
    return 0;
}


void Function(Square Rect)
{
    std:: cout << "DRectangle :" << Rect.itsWidth;
}































