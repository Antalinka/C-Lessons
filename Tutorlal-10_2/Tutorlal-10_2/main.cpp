//
//  main.cpp
//  Tutorlal-10_2
//
//  Created by Eugene Tretiakova on 2/4/16.
//  Copyright © 2016 Eugenya. All rights reserved.
//

#include <iostream>

class Counter
{
public:
    Counter();
    Counter(int initialValue);
    ~Counter(){};
    int GetIstVal() const{return itsVal;};
    void SetItsVal(int x){itsVal = x;};
    Counter Add(const Counter &);
    Counter operator+ (const Counter &);
    
private:
    int itsVal;
};

Counter::Counter(int initialValue):
itsVal(initialValue)
{}

Counter::Counter():
itsVal(0)
{}

Counter Counter::Add(const Counter & rhs)
{
    return Counter(itsVal + rhs.GetIstVal());
}
Counter Counter::operator+ (const Counter & rhs)
{
    return Counter(itsVal + rhs.GetIstVal());
}


int main(int argc, const char * argv[]) {
    
    Counter varOne(2), varTwo(4), varThree;
//    varThree = varOne.Add(varTwo);
    varThree = varOne + varTwo;
    std::cout << "varOne :" << varOne.GetIstVal() << std::endl;
    std::cout << "varTwo :" << varTwo.GetIstVal() << std::endl;
    std::cout << "varThree :" << varThree.GetIstVal() << std::endl;

    
    return 0;
}
