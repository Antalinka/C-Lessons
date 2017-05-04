//
//  main.cpp
//  Tutorial12_3
//
//  Created by Eugene Tretiakova on 2/8/16.
//  Copyright © 2016 Eugenya. All rights reserved.
//

#include <iostream>



int main(int argc, const char * argv[]) {
    
   /*
    char String1[] = "No man is an island";
    char String2[80];
    strcpy(String2, String1);
    
    std::cout << "String1 : " << String1 << std::endl;
    std::cout << "String2 : " << String2 << std::endl;
    */
    
    const int MaxLength = 80;
    char String1[] = "No man is an island";
    char String2[MaxLength + 1];
    strncpy(String2, String1, MaxLength);
    
    std::cout << "String1 :" << String1 << std::endl;
    std::cout << "String2 :" << String2 << std::endl;

    
    return 0;
}
