//
//  main.cpp
//  Tutorial-2
//
//  Created by Eugene Tretiakova on 2/2/16.
//  Copyright © 2016 Eugenya. All rights reserved.
//

#include <iostream>



int main(int argc, const char * argv[]) {
    
    std::cout << "The size of int : \t\t" << sizeof(int) << "bytes.\n";
    std::cout << "The size of short int : \t\t" << sizeof(short) << "bytes.\n";
    std::cout << "The size of long int : \t\t" << sizeof(long) << "bytes.\n";
    std::cout << "The size of char : \t\t" << sizeof(char) << "bytes.\n";
    std::cout << "The size of float : \t\t" << sizeof(float) << "bytes.\n";
    std::cout << "The size of double : \t\t" << sizeof(double) << "bytes.\n";
    std::cout << "The size of bool : \t\t" << sizeof(bool) << "bytes.\n";

    return 0;
}
