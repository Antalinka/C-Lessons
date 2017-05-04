//
//  Cat.cpp
//  Tutorial-6
//
//  Created by Eugene Tretiakova on 2/3/16.
//  Copyright © 2016 Eugenya. All rights reserved.
//

#include "Cat.hpp"
#include <iostream>

Cat::Cat(int initialAge)
{
    itsAge = initialAge;
}
Cat::~Cat()
{
    
}
unsigned int Cat::GetAge()const
{
    return itsAge;
}
void Cat::SetAge(unsigned int Age)
{
    itsAge = Age;
}

void Cat::SetWeight(unsigned int Weight)
{
    itsWeight = Weight;
}

void Cat::Meow()
{
    std::cout << "Meow";
}
