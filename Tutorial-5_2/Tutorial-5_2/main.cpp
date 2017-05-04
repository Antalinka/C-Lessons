//
//  main.cpp
//  Tutorial-5_2
//
//  Created by Eugene Tretiakova on 2/3/16.
//  Copyright © 2016 Eugenya. All rights reserved.
//

#include <iostream>

inline int Double(int);

int Area(int x, int y)
{
    return 3;
}


int Area(int x)
{
    printf("int Area(int x)");
    return 5;
}


int main(int argc, const char * argv[]) {
    
    Area(5);
    
    /*int target;
    std::cout << "Enter a umber to work with";
    std::cin >> target;
    std::cout << "\n";
    
    target = Double(target);
    std::cout << "Target : " << target << std::endl;
    
    target = Double(target);
    std::cout << "Target : " << target << std::endl;
    
    target = Double(target);
    std::cout << "Target : " << target << std::endl;
    
    return 0;*/
}

int Double(int target)
{
    return 2 * target;
}