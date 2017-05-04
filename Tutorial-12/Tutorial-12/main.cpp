//
//  main.cpp
//  Tutorial-12
//
//  Created by Eugene Tretiakova on 2/5/16.
//  Copyright © 2016 Eugenya. All rights reserved.
//

#include <iostream>

class CAT
{
public:
    CAT(){itsAge = 1, itsWeight = 5;};
    ~CAT(){};
    int GetAge() const{return itsAge;};
    int GetWeight() const{return itsWeight;};
    void SetAge(int age){itsAge = age;}
    
private:
    int itsAge;
    int itsWeight;
};


int main(int argc, const char * argv[]) {
 /*   int myArray[5];
    int i;
    for (i = 0; i < 5; i++)
    {
        std::cout << "Value from my array[" << i << "]: ";
        std::cin >> myArray[i];
        
    }
    
    for (i = 0; i < 5; i++) {
        std::cout << i << ":" << myArray[i] << "\n";
        
    }*/
   /* CAT Litter[5];
    int i;
    for (i = 0; i < 5; i++) {
        Litter[i].SetAge(2*i + 1);
    }
    
    for (i = 0; i < 5; i++) {
        std::cout << "cat #" << i + 1 << ": ";
        std::cout << Litter[i].GetAge() << std::endl;
    }
    */
    CAT * Family[500];
    int i;
    CAT * pCat;
    for (i = 0; i < 500; i++) {
        pCat = new CAT;
        pCat -> SetAge(2*i + 1);
        Family[i] = pCat;
    }
    
    for (i = 0; i < 500; i++) {
        std::cout << "Cat #" << (i+1) << ": ";
        std::cout << Family[i] -> GetAge() << std::endl;
    }
    
    return 0;
    
}
