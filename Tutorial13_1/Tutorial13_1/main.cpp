//
//  main.cpp
//  Tutorial13_1
//
//  Created by Eugene Tretiakova on 2/22/16.
//  Copyright © 2016 Eugenya. All rights reserved.
//

#include <iostream>


enum TYPE {HORSE, PEGASUS};


class Horse
{
public:
    virtual void Gallop(){std::cout << "Galloping....\n";};
private:
    int itsAge;
};

class Pegasus : public Horse
{
public:
    virtual void Fly(){std::cout << "I can fly ! I can fly! I can fly!\n";};
};

const int NumberHorse = 5;
int main(int argc, const char * argv[])
{
    
    Horse* Ranch[NumberHorse];
    Horse* pHorse;
    
    int choice, i;
    for (int i = 0; i < NumberHorse; i++)
    {
        std::cout << "(1) Horse, (2) Pegasus: ";
        std::cin >> choice;
        if (choice == 2)
        {
            pHorse = new Pegasus;
        }
        else
        {
            pHorse = new Horse;
        }
        Ranch[i] = pHorse;
    }
    std::cout << "\n";
    
    for (i = 0; i < NumberHorse; i++)
    {
        Pegasus* pPeg = dynamic_cast<Pegasus * >(Ranch[i]);
        if (pPeg)
        {
            pPeg->Fly();
        }
        else
        {
            std::cout << "Just a horse\n";
        }
        delete Ranch[i];
    }
    
    
    std::cout << "Hello, World!\n";
    return 0;
}


















































