//
//  main.cpp
//  Tutorial13_3
//
//  Created by Eugene Tretiakova on 2/23/16.
//  Copyright © 2016 Eugenya. All rights reserved.
//

#include <iostream>
enum COLOR{Red, Green, Blue, Yellow, White, Black,Brown};

class Animal
{
public:
    Animal(int);
    virtual ~Animal(){std::cout << "Animal destuctor...\n";}
    virtual int GetAge()const{return itsAge;}
    virtual void SetAge(int age) {itsAge = age;};
    virtual void Sleep() const {};
    virtual void Eat() const {};
    virtual void Reproduce() const {};
    virtual void Move() const {};
    virtual void Speak() const {};
private:
    int itsAge;
};

Animal::Animal(int age) :
itsAge(age)
{
    std::cout << "Animal constructor...\n";
}

class Mammal : public Animal
{
public:
    Mammal(int age) : Animal(age) { std::cout << "Mammal constructor...\n";}
    virtual ~Mammal(){ std::cout << "Mammal destructor...\n"; };
    virtual void Reproduce() const {std::cout << "Mammal reproduction depicted...\n";}
};

class Fish : public Animal
{
public:
    Fish(int age) : Animal(age){std::cout << "Fish constructor...\n";}
    virtual ~Fish(){std::cout << "Fish deatructor... \n";}
    virtual void Sleep() const {std::cout << "fish snoring...\n";}
    virtual void Eat() const  {std::cout << "fish feeding...\n";}
    virtual void Reproduce() {std::cout << "fish laying eggs...\n";}
    virtual void Move() {std::cout << "fish swimming...\n";}
    virtual void Speak() const{};
};


class Horse : public Mammal
{
public:
    Horse(int age, COLOR color) :
    Mammal(age), itsColor(color)
    {
        std::cout << "Horse constructor... \n";
    }
    virtual ~Horse() { std::cout << "Horse destructor...\n";}
    virtual void Speak() const {std::cout << "Whinny!..\n";}
    virtual COLOR GetItsColor() {return itsColor;}
    virtual void Sleep() const {std::cout << "horse snoring...\n";}
    virtual void Eat() const  {std::cout << "horse feeding...\n";}
    virtual void Move() {std::cout << "horse running...\n";}
private:
    COLOR itsColor;
};

class Dog : public Mammal
{
public:
    Dog(int age, COLOR color) :
    Mammal(age), itsColor(color)
    {
        std::cout << "Dog constructor... \n";
    }
    virtual ~Dog() { std::cout << "Dog destructor...\n";}
    virtual void Speak() const {std::cout << "Woof!..\n";}
    virtual COLOR GetItsColor() {return itsColor;}
    virtual void Sleep() const {std::cout << "Dog snoring...\n";}
    virtual void Eat() const  {std::cout << "Dog eating...\n";}
    virtual void Move() {std::cout << "Dog running...\n";}
    virtual void Reproduce() const
    {
        std::cout << "Dogs reproducing...\n";
    }
protected:
    COLOR itsColor;
};

int main(int argc, const char * argv[])
{
    Animal *pAnimal = 0;
    int choice;
    bool fQuit = false;
    
    while (1)
    {
        std::cout << "(1)Dog (2)Horse (3)Fish (0)Quit: ";
        std::cin >>choice;
        
        switch (choice) {
            case 1: pAnimal = new Dog(5, Brown);
                break;
            case 2: pAnimal = new Horse(5, Green);
                break;
            case 3: pAnimal = new Fish(4);
                break;
                
            default: fQuit = true;
                break;
        }
        if (fQuit)
        {
            break;
        }
        pAnimal->Speak();
        pAnimal->Eat();
        pAnimal->Reproduce();
        pAnimal->Move();
        pAnimal->Sleep();
        std::cout << "\n";
    }
    return 0;
}































