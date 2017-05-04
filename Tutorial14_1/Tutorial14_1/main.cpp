//
//  main.cpp
//  Tutorial14_1
//
//  Created by Eugene Tretiakova on 2/23/16.
//  Copyright © 2016 Eugenya. All rights reserved.
//

#include <iostream>

class Cat
{
public:
    Cat(int age): itsAge(age){HowManyCats++;}
    virtual ~Cat(){HowManyCats--;}
    virtual int GetAge(){return itsAge;}
    virtual void SetAge(int age) {itsAge = age;}
    
    static int HowManyCats;
private:
    int itsAge;
};
    int Cat::HowManyCats = 0;
    
int main(int argc, const char * argv[])
{
    const int MaxCats = 5;
    int i; Cat * CatHouse[MaxCats];
    for (i = 0; i < MaxCats; i++)
    {
        CatHouse[i] = new Cat(i);
    }
    
    for (i = 0; i < MaxCats; i++)
    {
        std::cout << "There are ";
        std::cout << Cat::HowManyCats;
        std::cout << " cats left!\n";
        std::cout << "Deleting the one which is ";
        std::cout << CatHouse[i]->GetAge();
        std::cout << " years old\n";
        delete CatHouse[i];
        CatHouse[i] = 0;
    }
    
    return 0;
}
