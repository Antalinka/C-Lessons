//
//  main.cpp
//  Tutorial13_2
//
//  Created by Eugene Tretiakova on 2/22/16.
//  Copyright © 2016 Eugenya. All rights reserved.
//

#include <iostream>

typedef int HANDS;
enum COLOR{Red, Green, Blue, Yellow, White, Black,Brown};

class Animal
{
public:
    Animal(int);
    virtual ~Animal(){std::cout << "Animal destuctor...\n";}
    virtual int GetAge()const{return itsAge;}
    virtual void SetAge(int age) {itsAge = age;};
private:
    int itsAge;
};

Animal::Animal(int age) :
itsAge(age)
{
    std::cout << "Animal constructor...\n";
}

class Horse : virtual public Animal
{
public:
    Horse(COLOR color, HANDS height, int age);
    virtual ~Horse(){std::cout << "Horse destructor...\n";};
    virtual void Whinny() const {std::cout << "Whinny!...";};
    virtual HANDS GetHeight() const {return itsHeight;};
    virtual COLOR GetColor() const{return itsColor;};
    
private:
    HANDS itsHeight;
    COLOR itsColor;
};

Horse::Horse(COLOR color, HANDS height, int age):
Animal(age),itsColor(color), itsHeight(height)
{
    std::cout << "Horse constructor....\n";
}

class Bird : virtual private Animal
{
public:
    Bird(COLOR color, bool migrates, int age);
    virtual ~Bird(){std::cout << "Bird destructor...\n";};
    virtual void Chirp() const{std::cout << "Chirp....";};
    virtual void Fly()const
    {
        std::cout << "I can fly! I can fly! I can fly!";
    }
    virtual COLOR GetColor() const{return  itsColor;};
    virtual bool GetMigration() const {return itsMigration;};
private:
    COLOR itsColor;
    bool itsMigration;
};

Bird::Bird(COLOR color, bool migrates, int age) :
Animal(age),itsColor(color), itsMigration(migrates)
{
    std::cout << "Bird constructor....\n";
}

class Pegasus : public Horse, public Bird
{
public:
    void Chirp() const {Whinny();};
    Pegasus(COLOR, HANDS, bool, long, int);
    ~Pegasus(){std::cout << "Pegasus destructor...\n";};
    virtual long GetNumberBelivers() const
    {
        return itsNumberBelivers;
    }
    virtual COLOR GetColor() const{return  Horse::GetColor();};
private:
    long itsNumberBelivers;
};

Pegasus::Pegasus(COLOR aColor, HANDS height, bool migrates, long NumBelieve, int age) :
Horse(aColor, height, age), Bird(aColor, migrates, age),Animal(age),itsNumberBelivers(NumBelieve)
{
    std::cout << "Pegasus constructor...\n";
}


int main(int argc, const char * argv[])
{
    Pegasus * pPeg = new Pegasus(Red,5, true, 10, 2);
    pPeg->Fly();
    pPeg->Whinny();
    std::cout << "\nYour Pegasus is " << pPeg->GetHeight();
    std::cout << "hands tall and ";
    pPeg->GetColor();
    
    if (pPeg->GetMigration())
    {
        std::cout << "it does migrate";
    }
    else
    {
        std::cout << "It doesn't migrate";
    }
    std::cout << "\n total of " << pPeg->GetNumberBelivers();
    std::cout << " people believe it exist.\n";
    int age = pPeg->GetAge();
    std::cout << "This pegasus is " << age << " years old.\n";

    delete pPeg;
    
    return 0;
}


















































