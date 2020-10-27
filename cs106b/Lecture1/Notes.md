#  Introduction to C++

- Language that is good for writing operating systems or stuff related to computer hardware work.
- Pretty similar to Java/C
- Compiled language (.o) and its compiled file can be run on multiple platforms

```
#include <iostream>

int main() {
    std::cout << "Hello, World!\n";
    return 0;
}
```
- Simplest program written in C++. Prints the string "Hello, World!"

## Main function
```
int main() {
    statement
    statement
    statement
    return 0;
}
```
- Returns an integer exit code to the operating system (0 = succes, non-zero = failure)
- `int` at the start states that the function returns an integer


## Syntax
```
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
```


## Including libraries
```
#include <filename> // a C++ system library
#include "iostream.h" // a local project library 
```

## Namespaces and using
- **namespace**: 
    - an area for scoping identifiers ( functions, variables)
    - helps avoid collisions between items with the same name
    - C++ I/O objects (cout, cin, etc) are in name space std
    
- using namespace **name**:
    - brings symbols from library's "name space" in global scope of the program so your program can refer to them
    
- **namespace::identifier**:
    - without using a declaration, you can access symbols from a namespace by preceding them with their namespace name and **::**
    - `std::cout << "Hello, World!\n" << std::endl;`

## User input and output

### Output
- `cout << expression << expression ...`
    - `cout << "You are " << age << " years old.";`

- `endl`
    - A variable that means end of line
    - Same as **"/n"** but more compatible with most operating systems
    
### Input
- `cin variable` 
    - reads input from console and stores it in the given variable
