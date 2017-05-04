//
//  main.cpp
//  Tutorial-4
//
//  Created by Eugene Tretiakova on 2/2/16.
//  Copyright © 2016 Eugenya. All rights reserved.
//

#include <iostream>

void intDiv(int x, int y){
    
    int z = x/y;
    std::cout << "z: " << z << std::endl;
}

void floatDiv(int x, int y)
{
    float a = (float) x;
    float b = static_cast<float>(y);
    float c = a/b;
    
    std::cout << "c :" << c << std::endl;
}

int main(int argc, const char * argv[]) {
    
 /*   unsigned int difference;
    unsigned int bigNumber = 100;
    unsigned int smallNumber = 50;
    difference = bigNumber - smallNumber;
    std::cout << "Difference is : " << difference;
    difference =  smallNumber - bigNumber;
    std::cout << "\nNow difference is : " << difference << std::endl;
*/
    
   /* int x = 5, y = 3;
    intDiv(x, y);
    floatDiv(x, y);*/
    
    
    return 0;
}
