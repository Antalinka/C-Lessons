//
//  main.cpp
//  Tutorial-8
//
//  Created by Eugene Tretiakova on 2/3/16.
//  Copyright © 2016 Eugenya. All rights reserved.
//

#include <iostream>

class SimpleCat
{
public :
    
    SimpleCat();
    ~SimpleCat();
    int GetAge() const {return *itsAge;}
    void SetAge(int age){*itsAge = age;}
    
    int GetWeight() const {return *itsWeight;}
    void SetWeight(int weight){*itsWeight = weight;}

    
private:
    int *itsAge;
    int *itsWeight;
    
};

SimpleCat::SimpleCat()
{
    itsAge = new int(2);
    itsWeight = new int(5);
}

SimpleCat::~SimpleCat()
{
    delete itsAge;
    delete itsWeight;
}


typedef unsigned short int USHORT;

int main(int argc, const char * argv[]) {
    
    /*unsigned short int howOld = 20;
    unsigned short int *pAge = 0;
    pAge = &howOld;
    
    std::cout << "pAge : " << pAge << std::endl;
    std:: cout << "&pAge : " << *pAge << std::endl;*/
  /*  USHORT myAge;
    USHORT *pAge = 0;
    myAge = 5;
    
    std::cout << "myAge : " << myAge << "\n";
    pAge = &myAge;
    std::cout << "*pAge : " << *pAge << "\n\n";
    *pAge = 7;
    std::cout << "*pAge : " << *pAge << "\n";
    std::cout << "myAge : " << myAge << "\n";
    std::cout << "myAge = 9\n";
    myAge = 9;
    std::cout << "myAge : " << myAge << "\n";
    std::cout << "*pAge : " << *pAge << "\n";

    */
    
   /* unsigned short int *pPointer = new unsigned short int;
    *pPointer = 7;
    
    std::cout << *pPointer;
    
    delete pPointer;*/
  /*  int localVariable = 5;
    int * pLocal = &localVariable;
    int * pHeap = new int;
    *pHeap = 7;
    std::cout << "local variable : " << localVariable << "\n";
    std::cout << "*pLocal : " << *pLocal << "\n";
    std::cout << "*pHeap : " << *pHeap << "\n";
    delete pHeap;
    pHeap = new int;
    *pHeap = 9;
    std::cout << "*Heap : " << *pHeap << "\n";
    delete pHeap;*/

  /*  SimpleCat * Frisky = new SimpleCat;
    std::cout << "Frisky " << Frisky -> GetAge() << " years old\n";
    Frisky -> SetAge(5);
    std::cout << "Frisky " << Frisky -> GetAge() << " years old\n";
    delete Frisky;*/
    
    /*USHORT *pInt = new USHORT;
    *pInt = 10;
    std::cout << "*pInt " << *pInt << std::endl;
    delete pInt;
    
    long * pLong = new long;
    *pLong = 90000;
    std::cout << "*pLong " << *pLong << std::endl;
    
    *pInt = 20;
    std::cout << "*pInt :" << *pInt << std::endl;
    std::cout << "*Long : "<< *pLong << std::endl;
    
    delete pLong;*/
    
    const int * pOne;// указатель на константу, нельзя изменять значение
    int * const pTwo = nullptr;// константный указатель, значение может изменяться, адрес - нет
    const int * const pThree = nullptr;// константный указатель на константу, ничего не изменяется
    
    return 0;
}


























