//
//  main.cpp
//  Tutorial-11
//
//  Created by Eugene Tretiakova on 2/4/16.
//  Copyright © 2016 Eugenya. All rights reserved.
//

#include <iostream>

enum BREED{GOLDEN, CAIRN, DANDIE, SHETLAND, DOBERMAN, LAB};

class Mammal
{
public:
    Mammal(){};
    Mammal(int age){itsAge = age;};
    ~Mammal(){};
    
    int GetAge() const{return itsAge;};
    void SetAge(int age){itsAge = age;};
    int GetWegight() const{return itsWeight;};
    void SetWeight(int weight){itsWeight = weight;};
    
    void Speak() const {std::cout << "Mammal sound!\n";};
    void Sleep() const {std::cout << "shh.I'm sleeping.\n";};
    
    void Move() const {std::cout << "Mammal move one step\n";}
    void Move(int distance) const
    {
        std::cout << "Mammal move";
        std::cout << distance << " steps.\n";
    }
    
protected:
    int itsAge;
    int itsWeight;
};

class Dog : public Mammal
{
public:
    Dog();
    Dog(int age);
    Dog(int age, BREED breed);
    Dog(int age, int weight);
    Dog(int age, int weight, BREED breed);
    ~Dog(){};
    
    BREED GetBreed() const {return itsBreed;};
    void SetBreed(BREED){std::cout << "Begging for food... \n";};
    
    void WagTail(){ std::cout << "Tail wagging...\n"; };
    void BegForFood(){ std::cout << "Begging for food...\n\n"; };
    
    void Speak() const {std::cout << " Woof!\n";};
    void Move() const {std::cout << "Dog move 5 steps.\n";}

protected:
    BREED itsBreed;
    
};


Dog::Dog():
Mammal(),
itsBreed(GOLDEN)
{
    std::cout << "Dog constructor...\n";
}
Dog::Dog(int age):
Mammal(age),
itsBreed(GOLDEN)
{
    std::cout << "Dog(int) constructor...\n";
}

Dog::Dog(int age, int weight):
Mammal(age),
itsBreed(GOLDEN)
{
    itsWeight = weight;
    std::cout << "Dog(int, int) constructor...\n";
}
Dog::Dog(int age, int weight, BREED breed):
Mammal(age),
itsBreed(breed)
{
    itsWeight = weight;
    std::cout << "Dog(int, int, BREED) constructor...\n";
}

Dog::Dog(int age, BREED breed):
Mammal(age),
itsBreed(breed)
{
}

int main(int argc, const char * argv[])
{
   /* Dog fido;
    Dog rover(5);
    Dog buster(6,8);
    Dog yourkie(3, GOLDEN);
    Dog dobbie(4,20,DOBERMAN);

    fido.Speak();
    rover.WagTail();
    std::cout << "yourkie is " << yourkie.GetAge() << " years old\n";
    std::cout << "Dobbie weight ";
    std::cout << dobbie.GetWegight() << " pouns\n";*/
    
    Mammal bigAnimal;
    Dog fido;
    bigAnimal.Move();
    bigAnimal.Move(2);
    fido.Move();
    fido.Mammal::Move(10);
    
    
    return 0;
}
