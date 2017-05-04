//
//  main.cpp
//  Tutorial-9HW
//
//  Created by Eugene Tretiakova on 2/4/16.
//  Copyright © 2016 Eugenya. All rights reserved.
//

#include <iostream>

class SimpleClass
{
public:
    SimpleClass(int a){};
    void someFunction(){std::cout << "someFunction";};
};

class Cat
{
public:
    Cat(int age){itsAge = age;};
    ~Cat(){};
    int GetAge() const {return itsAge;};
private:
    int itsAge;
};
Cat & makeCat(int age);
SimpleClass & GetClass();

int main(int argc, const char * argv[]) {
  /*
    int a = 1;
    int *pA = &a;
    std::cout << "*pA : " << *pA << std::endl;
    *pA = 23;
    std::cout << "*pA : " << *pA << std::endl;
    std::cout << "a : " << a << std::endl;

    int &rA = a;
    std::cout << "rA : " << rA << std::endl;
    
    rA = 20;
    std::cout << "rA : " << rA << std::endl;
    std::cout << "a : " << a << std::endl;*/
    
    /*int varOne = 0;
    int varTwo = 1;
    int * const a = &varOne;
    varOne = 6;
    
    *a = 7;
     a = &varTwo;
    
    std::cout << "varOne : " << varOne << std::endl;
    std::cout << "*a : " << *a << std::endl;
*/
    
    //блуждающий указатель
    /*
    int varOne = 2;
    int * a = new int;
    *a = 5;
    
    std::cout << "varOne : " << varOne << std::endl;
    std::cout << "*a : " << *a << std::endl;
    delete a;
   // a = NULL;
    
    int * b = new int;
    std::cout << "*b : " << *b << std::endl;

    *a = 10;
    
    std::cout << "*a : " << *a << std::endl;
    std::cout << "*b : " << *b << std::endl;*/
    
    //утечка памяти
   /* SimpleClass & example = GetClass();
    example.someFunction();*/
    
    int age = 7;
    Cat Boots = makeCat(age);
    std::cout << "Boots is " << Boots.GetAge() << " years old.\n";
    
    return 0;
}

Cat & makeCat(int age)
{
    Cat * pCat = new Cat(age);
//    if (pCat != nullptr)
//    {
        return *pCat;
//    }
}

/*SimpleClass & GetClass()
{
    SimpleClass exampleClass(3);
    
    return exampleClass;
}*/



