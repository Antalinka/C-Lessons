//
//  main.cpp
//  Tutorial-6
//
//  Created by Eugene Tretiakova on 2/3/16.
//  Copyright © 2016 Eugenya. All rights reserved.
//

#include <iostream>
#include "Cat.hpp"
#include "Rect.hpp"

int main(int argc, const char * argv[]) {
    
   /* Cat myCat = Cat(4);
    myCat.SetAge(5);
    myCat.Meow();
    
    std::cout << std::endl;
    std::cout << "My cat is cat who is ";
    std::cout << myCat.Cat::GetAge() << " years old.\n";
    
    
    Cat Frisky(5);
    Frisky.Meow();
    std::cout << "Frisky is a cat who is ";
    std::cout << Frisky.GetAge() << " years old.\n";
    Frisky.Meow();
    Frisky.SetAge(7);
    std::cout << " Now Frisky is ";
    std::cout << Frisky.GetAge() << " years old.\n";
        */
    Rectangle MyRectangle(100, 20, 50, 80);
    int Area = MyRectangle.GetArea();
    std::cout << "Area : " << Area << "\n";
    std::cout << "Upper Left X Coordinate :";
    std::cout << MyRectangle.GetUpperLeft().GetX();
    
    return 0;
}
