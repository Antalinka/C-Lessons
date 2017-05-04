//
//  main.cpp
//  Tutorial14_2
//
//  Created by Eugene Tretiakova on 2/23/16.
//  Copyright © 2016 Eugenya. All rights reserved.
//

#include <iostream>
void Square(int&, int&);
void Cube(int&, int&);
void Swap(int&, int&);
void GetVals(int&, int&);

typedef void(*VPF)(int&, int&);
void PrintVals( VPF pFunc, int x, int y);

int main(int argc, const char * argv[])
{

    int valOne = 1, valTwo = 2;
    int choice;
    bool fQuit = false;
    VPF pFunc = nullptr;
    
   /* void (* pFunc)(int &, int &) = nullptr;
    bool fQuit = false;
    int valOne =1, valTwo = 2;
    int choice;
    */
    while (fQuit == false)
    {
        std::cout << "(0) Quit (1) Change Values (2) Square (3) Cube (4) Swap : ";
        std::cin >> choice;
        switch (choice)
        {
            case 1: pFunc = GetVals; break;
            case 2: pFunc = Square; break;
            case 3: pFunc = Cube; break;
            case 4: pFunc = Swap; break;
            default:fQuit = true; break;
        }
        if (fQuit)
        {
            break;
        }
        PrintVals(pFunc, valOne, valTwo);
    }
    
    return 0;
}

void PrintVals( VPF pFunc, int x, int y)
{
    std::cout << "x : " << x << ",y: " << y <<std::endl;
    pFunc(x,y);
    std::cout << "x : " << x << ",y: " << y <<std::endl;
}

void Square(int & rX, int & rY)
{
    rX *= rX;
    rY *= rY;
}

void Cube(int& rX, int& rY)
{
    int tmp;
    tmp = rX;
    rX *= rX;
    rX = rX * tmp;
    tmp = rY;
    rY *= rY;
    rY = rY * tmp;
}

void Swap(int & rX, int & rY)
{
    int temp;
    temp = rX;
    rX = rY;
    rY = temp;
}

void GetVals(int & rValOne, int & rValTwo)
{
    std::cout << "new value for ValOne: ";
    std::cin >> rValOne;
    std::cout << "New value for ValTwo : ";
    std::cin >> rValTwo;
}


































