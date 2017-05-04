//
//  Cat.hpp
//  Tutorial-6
//
//  Created by Eugene Tretiakova on 2/3/16.
//  Copyright © 2016 Eugenya. All rights reserved.
//

#ifndef Cat_hpp
#define Cat_hpp

#include <stdio.h>

class Cat
{
public:
    unsigned int GetAge() const;
    void SetAge(unsigned int Age);
    
    unsigned int GetWeight()const{return itsWeight;};
    void SetWeight(unsigned int Weight);
    
    void Meow();
    
    Cat(int initialAge);
    ~Cat();
    
private:
    unsigned int itsWeight;
    unsigned int itsAge;
};

#endif /* Cat_hpp */
