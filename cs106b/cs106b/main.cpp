//
//  main.cpp
//  cs106b
//
//  Created by Bohdan Juříček on 27/10/2020.
//

#include <iostream>

int main() {
    // insert code here...
    std::cout << "Hello, World!\n";
    
    
    int x = 42 + 7 * 2; // Variables, types
    double pi = 3.14569;
    char c = 'q'; /* Two comment styles */
    bool b = true;

    for (int i = 0; i <= 10; i++) { // For loops
        if (i % 2 == 0) { // If statements
            x += 1;
        }
    }

    while (x < 0 && c == 'q' || b) { // While loops, logic
        x = x / 2;
        if (x == 42) { return 0; }
        
    }
    
    fooBar(x, 17, c); // function call
    barBaz('This is a string') // string usage
    
    
    
    return 0;
}
