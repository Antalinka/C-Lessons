//
//  main.cpp
//  Tutorial-8_2
//
//  Created by Eugene Tretiakova on 2/3/16.
//  Copyright © 2016 Eugenya. All rights reserved.
//

#include <iostream>
#include <ctype.h>
#include <string.h>

bool GetWord(char* string, char* word, int& wordOffset);

int main(int argc, const char * argv[]) {
    
  /*  const int bufferSize = 155;
    char buffer[bufferSize + 1];
    char word[bufferSize + 1];
    int wordOffset = 0;
    
    std::cout << "Enter a string :";
    std::cin.getline(buffer, bufferSize);
    
    while (GetWord(buffer, word,wordOffset)) {
        std::cout << "Got this word : " << word << std::endl;
    }*/
    int SomeVariable = 5;
    std::cout << "SomeVariable: " << SomeVariable << "\n";
    int *pVar = &SomeVariable;
    std::cout << "SomeVariable: " << *pVar << "\n";

    *pVar = 9;
    std::cout << "SomeVariable: " << *pVar << "\n";
    
    return 0;
}

bool GetWord(char* string, char* word, int& wordOffset)
{
    if (!string[wordOffset]) {
        return  false;
    }
    char *p1, *p2;
    p1 = p2 = string + wordOffset;
    
    for (int i = 0; i < (int)strlen(p1) && !isalnum(p1[0]); i++) {
        p1++;
    }
    
    
    p2 = p1;
    
    while (isalnum(p2[0])) {
        p2++;
    }
    int len = int(p2-p1);
    strncpy(word, p1, len);
    word[len] = '\0';
    
    for (int i = int(p2 - string);i < (int)strlen(string) && !isalnum(p2[0]); i++) {
        p2++;
    }
    wordOffset = int(p2 - string);
    return  true;
}