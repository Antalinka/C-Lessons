//
//  main.cpp
//  Tutorial-9_2
//
//  Created by Eugene Tretiakova on 2/4/16.
//  Copyright © 2016 Eugenya. All rights reserved.
//

#include <iostream>

class SimpleCat
{
public:
    SimpleCat(int age, int weight);
    SimpleCat(SimpleCat&);
    ~SimpleCat(){};
    
    int GetAge() {return itsAge;}
    int GetWeight() {return itsWeight;}

//    void SetAge(int age){itsAge = age;}
    
private:
    int itsAge;
    int itsWeight;
};


SimpleCat::SimpleCat(int age, int weight)
{
    std::cout << "SimpleCat constructor...\n";
    itsAge = age;
    itsWeight = weight;
}


SimpleCat::SimpleCat(SimpleCat&)
{
    std::cout << "SimpleCat Copy constructor...\n";
}



SimpleCat FunctionOne(SimpleCat theCat);
SimpleCat *FunctionTwo(SimpleCat *theCat);

SimpleCat & TheFunction();

int main(int argc, const char * argv[]) {
    
    
//    std::cout << "Making a cat...\n";
//    SimpleCat Frisky;
    /*std::cout << "Calling FunctionOne... \n";
    FunctionOne(Frisky);
    std::cout << "Calling FunctionTwo... \n";
    FunctionTwo(&Frisky);*/
    
  /*  std::cout << "Frisky is ";
    std::cout << Frisky.GetAge();
    std::cout << " years old\n";
    int age = 5;
    Frisky.SetAge(age);
    std::cout << "Frisky is ";
    std::cout << Frisky.GetAge();
    std::cout << " years old\n";

    std::cout << "Calling FunctionTwo... \n";
    FunctionTwo(&Frisky);

    std::cout << "Frisky is ";
    std::cout << Frisky.GetAge();
    std::cout << " years old\n";
*/
    SimpleCat &rCat = TheFunction();
    int age = rCat.GetAge();
    std::cout << "rCat " << age << " years old!\n";
    
    return 0;
}

SimpleCat & TheFunction()
{
    SimpleCat Frisky(5, 9);
    return Frisky;
}

SimpleCat FunctionOne(SimpleCat theCat)
{
    std::cout << "FunctionOne...\n";
    return theCat;
}

SimpleCat *FunctionTwo(SimpleCat *theCat)
{
    std::cout << "FunctionTwo, Returning...\n";
    std::cout << "Frisky is now " << theCat->GetAge();
    std::cout << " years old\n";

    return theCat;
}
