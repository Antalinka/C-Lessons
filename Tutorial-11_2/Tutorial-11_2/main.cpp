//
//  main.cpp
//  Tutorial-11_2
//
//  Created by Eugene Tretiakova on 2/5/16.
//  Copyright © 2016 Eugenya. All rights reserved.
//

#include <iostream>

class Mammal
{
public:
    Mammal():itsAge(1){std::cout << "Mammal constructor...\n";};
    virtual ~Mammal(){std::cout << "Mammal destructor...\n";};
    Mammal (const Mammal & rhs);
    void Move() const {std::cout << "Mammal move one step...\n";};
    virtual void Speak() const{std::cout << "Mammal speak!\n";};
    virtual Mammal* Clone(){return new Mammal(*this);}
    
    int GetAge() const{return  itsAge;}
protected:
    int itsAge;
};

Mammal::Mammal(const Mammal & rhs):itsAge(rhs.GetAge())
{
    std::cout << "Mammal Copy Constructor...\n";
}

class Dog : public Mammal
{
public:
    Dog(){std::cout << "Dog Constructor...\n";};
    virtual ~Dog(){std::cout << "Dog destructor...\n";};
    Dog(const Dog & rhs);
    void WagTail(){std::cout << "Wagging Tail...\n";}
    void Speak() const{std::cout << "Woof!\n";};
    void Move() const {std::cout << "Dog moves one steps...\n";};
    virtual Mammal* Clone(){return new Dog(*this);};
};

Dog::Dog(const Dog & rhs):
Mammal(rhs)
{
    std::cout << "Dog copy constructor...\n";
}

class Cat : public Mammal
{
public:
    Cat(){std::cout << "Cat constructor..\n";};
    ~Cat(){std::cout << "Cat destructor...\n";};
    Cat(const Cat &);
    void Speak() const{std::cout << "Meow!\n";};
    virtual Mammal* Clone(){return  new Cat(*this);};
};

Cat::Cat(const Cat & rhs):
Mammal(rhs)
{
    std::cout << "Cat constructor ....\n";
}

enum ANIMALS {MAMMAL, DOG, CAT};
const int NumAmimalTypes = 3;

class Horse : public Mammal
{
    void Speak() const{std::cout << "Whinny!\n";};
};

class Pig : public Mammal
{
    void Speak() const{std::cout << "Oink!\n";};
};

void ValueFunction(Mammal MammalValue);
void PtrFunction(Mammal * pMammal);
void RefFunction(Mammal & rMammal);


int main(int argc, const char * argv[]) {
    
    Mammal *pDog = new Dog;
    pDog -> Move();
    pDog ->Speak();
    
//    Mammal* theArray[5];
    Mammal* ptr = 0;
    int choice, i;
    
    while (1)
    {
        bool fQuit = false;
        std::cout << "(1) dog (2) cat (3) horse (4) pig : ";
        std::cin >> choice;
        switch (choice) {
            case 0 : fQuit = true;
                break;
            case 1:
                ptr = new Dog;
                break;
            case 2: ptr = new Cat;
                break;
            case 3: ptr = new Horse;
                break;
            case 4: ptr = new Pig;
                break;
                
            default: ptr = new Mammal;
                break;
        }
        if (fQuit)
        {
            PtrFunction(ptr);
            RefFunction(*ptr);
            ValueFunction(*ptr);
            break;

        }

    }
    
  /*  Mammal* theArray[NumAmimalTypes];
    Mammal* ptr;
    int choice, i;
    for (i = 0; i < NumAmimalTypes; i++) {
        std::cout << "(1) dog (2) cat (3) Mammal :\n";
        std::cin >> choice;
        switch (choice) {
            case DOG:
                ptr = new Dog;
                break;
            case CAT:
                ptr = new Cat;
                break;
                
                
            default:
                ptr = new Mammal;
                break;
        }
        theArray[i] = ptr;
    }
    
    Mammal* OtherArray[NumAmimalTypes];
    
    for (i = 0; i < NumAmimalTypes; i++) {
        theArray[i] -> Speak();
        OtherArray[i] = theArray[i] -> Clone();
    }
    
    for (i= 0; i < NumAmimalTypes; i++ )
    {
        OtherArray[i] -> Speak();
    }
*/
    return 0;
}

void ValueFunction(Mammal MammalValue)
{
    MammalValue.Speak();
}

void PtrFunction(Mammal * pMammal)
{
    pMammal -> Speak();
}

void RefFunction(Mammal & rMammal)
{
    rMammal.Speak();
}





