//
//  main.cpp
//  Tutorial-9
//
//  Created by Eugene Tretiakova on 2/3/16.
//  Copyright © 2016 Eugenya. All rights reserved.
//

#include <iostream>
#include "Cat.hpp"

short Factor(int n, int * pSquated, int* pCubed);

int main(int argc, const char * argv[]) {
    
    /*int intOne;
    int &rSomeRef = intOne;
    
    intOne = 5;
    std::cout << "intOne : " << intOne << std::endl;
    std::cout << "rSomeRef : " << rSomeRef << std::endl;

    rSomeRef = 7;
    std::cout << "&intOne : " << &intOne << std::endl;
    std::cout << "&rSomeRef : " << &rSomeRef << std::endl;
*/
   /* int intOne;
    int &rSomeRef = intOne;
    
    intOne = 5;
    std::cout << "intOne : \t" << intOne << std::endl;
    std::cout << "rSomeRef : \t" << rSomeRef << std::endl;
    std::cout << "&intOne : \t" << &intOne << std::endl;
    std::cout << "&rSomeRef : \t" << &rSomeRef << std::endl;

    int intTwo = 8;
    rSomeRef = intTwo;
    std::cout << "intOne : \t" << intOne << std::endl;
    std::cout << "intTwo : \t" << intTwo << std::endl;
    std::cout << "rSomeRef : \t" << rSomeRef << std::endl;
    std::cout << "&intOne : \t" << &intOne << std::endl;
    std::cout << "&intTwo : \t" << &intTwo << std::endl;
    std::cout << "&rSomeRef : \t" << &rSomeRef << std::endl;

    */
  /*  Cat Frisky(5);
    Cat & rCat = Frisky;
    std::cout << "Frisky : ";
    std::cout << Frisky.GetAge() << " years old.\n";
    std::cout << "rCat : ";
    std::cout << rCat.GetAge() << " years old. \n";    
    */
    
    int number, squared, cubed;
    short error;
    
    std::cout << "Enter a number(0-20) : ";
    std::cin >> number;
    
    error = Factor(number, &squared, &cubed);
    if (!error)
    {
        std::cout << "number : " << number << "\n";
        std::cout << "squared : " << squared << "\n";
        std::cout << "cubed : " << cubed << "\n";
    }
    else
    {
        std::cout << "Error countered!";

    }
    
    return 0;
}
short Factor(int n, int * pSquated, int* pCubed)
{
    short Value = 0;
    if (n > 20)
    {
        Value = 1;
    }
    else{
        *pSquated = n*n;
        *pCubed = n*n*n;
        Value = 0;
    }
    return Value;
}