//
//  main.cpp
//  Tutorial-3
//
//  Created by Eugene Tretiakova on 2/2/16.
//  Copyright © 2016 Eugenya. All rights reserved.
//

#include <iostream>

//#define studentsPerClass 15

const unsigned short int studentsPerClass = 15;
typedef unsigned short int USHOT;


int main(int argc, const char * argv[]) {
    
    /*USHOT Width = 5;
    USHOT Length;
    Length = 10;
    
    USHOT Area = (Width * Length);
    
    std::cout << "Width : " << Width << "\n";
    std::cout << "Length : " << Length << "\n";
    std::cout << "Area : " << Area << "\n";*/
    
  /*  USHOT smallNumber;
    smallNumber = 65535;
    std::cout << " small number : " << smallNumber << std::endl;
    smallNumber++;
    std::cout << " small number : " << smallNumber<< std::endl;
    smallNumber++;
    std::cout << " small number : " << smallNumber << std::endl;
    smallNumber++;
  */
    
   // int numberOfStudents = studentsPerClass * 5;
    
    
   /* for (int i = 32; i < 128; i++) {
        std::cout << (char)i << " ";
        
    }*/
    enum Days {Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday};
    
    int choice;
    std::cout << "Enter a day(0-6)";
    std::cin >> choice;
    
    if(choice == Sunday || choice == Saturday)
        std::cout << "\n You're already off on weekends!\n";
    else
        std::cout << "\nOkay, I'll put in the vacation day.\n";
    
    
    return 0;
}
