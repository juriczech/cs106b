//
//  2.cpp
//  cs106b
//
//  Created by Bohdan Juříček on 27/10/2020.
//

#include <stdio.h>
#include <iostream>
#include <string>

// Writes a string in a diamond format
void nameDiamond(std::string name) {
    for (int i = 0; i < name.length(); i++) {
        std::cout << name.substr(0, i + 1) << std::endl;
    }

    for (int i  = 0; i < name.length(); i++) {
        for (int j = 0; j < i + 1; j++) {
            std::cout << " ";
        }
        std::cout << name.substr(i + 1) << std::endl;
    }
}

int main() {
    nameDiamond("MARTY");
    return 0;
}

