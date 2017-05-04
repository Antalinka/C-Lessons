//
//  main.cpp
//  Tutorial-7
//
//  Created by Eugene Tretiakova on 2/3/16.
//  Copyright © 2016 Eugenya. All rights reserved.
//

#include <iostream>

int menu();
void DoTaskOne();
void DoTaskMany(int);

int main(int argc, const char * argv[]) {
    
    int counter = 0;
/*loop: counter++;
    std::cout << "counter : " << counter << "\n";
    if (counter < 5) {
        goto loop;
    }
    std::cout << " Complete.Counter : " << counter << "\n";
    */
 /*   while (counter < 5) {
        counter++;
        std::cout << " Complete.Counter : " << counter << "\n";
    }*/
    /*while (true) {
        counter++;
        if (counter > 10) {
            break;
        }
    }*/
    
    //работает как оператор while
    /*for (; counter < 5;) {
        counter++;
        std::cout << "Looping! ";
        
    }*/
    
    //бесконечный цикл
   /* for (; ; ) {
        
    }*/
   // std::cout << "counter : " << counter << "\n";
    
   /* unsigned short int number;
    std::cout << "Enter a number between 1 and 5 :";
    std::cin >> number;
    
    switch (number) {
        case 0: std::cout << "Too small, sorry!\n";
            break;
        case 5: std::cout << "Good job!\n";
        case 4: std::cout << "Nice pick!\n";
        case 3: std::cout << "Exellent!\n";
        case 2: std::cout << "Masterful\n";
        case 1: std::cout << "Incredible\n";
            break;
            
        default: std:: cout << "Too large!\n";
            break;
    }*/
    
 /*   bool exit = false;
    for (; ; ) {
        int choice = menu();
        switch (choice) {
            case 1: DoTaskOne();
                break;
            case 2: DoTaskMany(2);
                break;
            case 3: DoTaskMany(3);
                break;
            case 4: continue;
                break;
            case 5: exit = true;
                break;
            default:
                std::cout << "Please select again!\n";
                break;
        }
        if (exit) {
            break;
        }
    }
*//*
    for (int i = 0; i < 200;i += 2) {
        std::cout << "I = " << i << "\n";
    }*/
    
   // int i = 0;
   /* while (i < 200) {
        std::cout << "I = " << i << "\n";
        i += 2;
    }*/
    
   /* do {
        i += 2;
        std::cout << "I = " << i << "\n";
    } while (i < 200);*/
    
    
    return 0;
}


int menu()
{
    int choice;
    std::cout << "***Menu****\n\n\n";
    std::cout << "(1) Choise one\n";
    std::cout << "(2) Choise two\n";
    std::cout << "(3) Choise three\n";
    std::cout << "(4) Redisplay menu\n";
    std::cout << "(5) Quit\n";
    std::cout << " : ";
    std::cin >> choice;
    return choice;
}


void DoTaskOne()
{
    std::cout << "Task One!\n";
}
void DoTaskMany(int which)
{
    if (which == 2) {
        std::cout << "Task Two!\n";
    }
    else
    {
        std::cout << "Task Three\n";
    }
}















