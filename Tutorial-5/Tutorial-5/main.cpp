//
//  main.cpp
//  Tutorial-5
//
//  Created by Eugene Tretiakova on 2/2/16.
//  Copyright © 2016 Eugenya. All rights reserved.
//

#include <iostream>

int Area(int length, int width);

int main(int argc, const char * argv[]) {

    int lengthOfYard;
    int widthOfYard;
    int areaOfYard;
    
    std::cout << "\nHow wide is your yard?";
    std::cin >> widthOfYard;
    std::cout << "\n How long is your yard";
    std::cin >> lengthOfYard;
    
    areaOfYard = Area(lengthOfYard, widthOfYard);

    
    std::cout << "Area of yard is";
    std::cout << areaOfYard;
    std::cout << "square feet";
    return 0;
}

int Area(int length, int width)
{
    return length * width;
}