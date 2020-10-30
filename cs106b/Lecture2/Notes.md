#  Lecture 2

## Functions
- Must be declared, before they are used. Can be avoided with function prototype
```
     double cylinderVolume(double r, double h); // declare the function without writing its body

     int main() {
         double result = cylinderVolume(2.4, 4.1); // call the function
         return 0;
     }

     double cylinder(double r, double h) {
         return 3.1459 * r * r * h;
     }
 ```


-This informs the compiler that there is going to be function with this name so the compiler won't throw an error.

### Default parameters
- its possible to make a parameter optional by giving it a default value
```
void printLine(int width = 10, char letter = '*') {
    for (int i = 0; i < width; i++) {
        cout << letter;
    }
}
    
printLine(); // **********
printLine(3, '?'); // ??? 
printLine(5); // *****
```

### Value semantics
- when variables (int, double) are passed as parameters, their values are copied (modifying a variable won't affect the variable passed in)

### Reference semantics
- if you pass a parameter with an `&` after its type, it will link the functions to the same place in memory (modifying a parameter will affect variable passed in)

### Output parameters 
```
void datingRange(int age, int& min, int& max) {
    min = age / 2 + 7;
    max = (age - 7) * 2;
}


int young, old;

datingRange(48, young, old);
cout << "A 48 years old could date someone from "
<< young << " to someone " << old << "." << endl; // 31, 82
```

- Reference parameters are useful to change values outside of the functions scope without returning any value.

### Procedural decomposition
- Properties of a good function 
    - Fully performs a single coherent task
    - Does not do too large a share of the work
    - Is not unnercessarily connected to other functions
- The **main** function should be a concise summary of the overall program


## Strings
- `#include <string>` - you need to import the string library, if you want to use strings
- `string s = "hello";`
- A string is a (possibly empty) sequence of characters
- There are two types of strings in C++:
    - Characters - values of type `char`, with 0-based indexes:
        - `string s = "Hi D00d!";`
        - individual characters can be accessed using `[index]` or at:
            - `char c1 = s[3]; // D`
            - `char c2 = s.at(1) // i`
            - Concatenating - you can cocatenate strings using + or +=
            - Strings are mutable and can be changed

