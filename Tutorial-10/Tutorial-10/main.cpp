//
//  main.cpp
//  Tutorial-10
//
//  Created by Eugene Tretiakova on 2/4/16.
//  Copyright © 2016 Eugenya. All rights reserved.
//

#include <iostream>

class Cat
{ public:
    Cat();
    Cat(const Cat &);
    ~Cat();
    int GetAge() const {return *itsAge;}
    int GetWeight() const {return *itsWeight;}
    void SetAge(int age){*itsAge = age;}
private:
    int *itsAge;
    int *itsWeight;
};

Cat::Cat()
{
    itsAge = new int;
    itsWeight = new int;
    *itsAge = 5;
    *itsWeight = 9;
}

Cat::Cat(const Cat & rhs)
{
    itsAge = new int;
    itsWeight = new int;
    *itsAge = rhs.GetAge();
    *itsWeight = *(rhs.itsWeight);
}

Cat::~Cat()
{
    delete itsAge;
    itsAge = 0;
    delete itsWeight;
    itsWeight = 0;
}

class Rectangle
{
public:
    Rectangle(int width, int height);
    ~Rectangle(){};
    void DrawShape(int aWidth, int aHeight, bool UseCurrentVals = false) const
    {
        int printWidth;
        int printHeight;
        
        if (UseCurrentVals == true) {
            printWidth  = itsWidth;
            printHeight = itsHeignt;
        }
        else
        {
            printWidth  = aWidth;
            printHeight = aHeight;
        }
        
        for (int i = 0; i < printHeight; i++) {
            for (int j = 0; j < printWidth; j++)
            {
                std::cout << "*";

            }
            std::cout << "\n";
        }
    };
    
private:
    int itsWidth;
    int itsHeignt;
};

Rectangle::Rectangle(int width, int height):
itsWidth(width),
itsHeignt(height)
{}


int main(int argc, const char * argv[]) {
  /*  Rectangle theRect(30,5);
    std::cout << "DrawShape(0,0,true)...\n";
    theRect.DrawShape(0, 0, true);
    
    std::cout << "DrawShape(40,2,true)...\n";
    theRect.DrawShape(40, 2);
*/
    Cat Frisky;
    std::cout << "Frisky's age : " << Frisky.GetAge() << std::endl;
    std::cout << "Settings frisky to 6 .... \n";
    Frisky.SetAge(6);
    std::cout << "Creating boots from Frisky\n";
    Cat Boots(Frisky);
    std::cout << "Frisky's age : " << Frisky.GetAge() << std::endl;
    std::cout << "Boot's age : " << Boots.GetAge() << std::endl;
    std::cout << "Settings frisky to 7 .... \n";
    Frisky.SetAge(7);
    
    
    return 0;
}
