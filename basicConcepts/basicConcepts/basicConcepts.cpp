
#include <string>

int main(int argc, char* argv[])
{
    return 0;
}

//dataTypes
int dataTypes()
{
    char c = 'a'; // a single character
    int i = 1; // integer (whole number)
    float f = 1.0; // floating point number (with decimals)
    double d = 1.0; // double precision floating point number
    bool b = true; // boolean (true or false)
    return 0;
}

//operators
int operators()
{
    int x = 1; // integer
    int y = 2; // integer
    int z = x + y; // sum of x and y (3
    int a = x - y; // difference of x and y (-1)
    int b = x * y; // product of x and y (2)
    double c = x / y; // quotient of x and y (0.5)
    int d = x % y; // remainder of x divided by y (1)
    return 0;
}

//controlFlow
int controlFlow()
{
    int x = 1;
    int y = 2;

    if (x == y) {
        // do something if x is equal to y
    }
    else if (x < y) {
        // do something if x is less than y
    }
    else {
        // do something if x is greater than y
    }

    switch (x) {
    case 1:
        // do something if x is equal to 1
        break;
    case 2:
        // do something if x is equal to 2
        break;
    default:
        // do something if x is not equal to 1 or 2
        break;
    }
    
    // do something while x is less than y
    while (x < y) {
        
        x++;
    }
    
    // do something while x is less than y
    do {
        
        x++;
    } while (x < y);
    
    // do something 10 times
    for (int i = 0; i < 10; i++) {
        
    }
    
    return 0;
}

//functions
int functions()
{
    // function with no return value and no parameters
    void function1() {
        // do something
    }

    // function with no return value and one parameter
    void function2(int x) {
        // do something with x
    }

    // function with no return value and two parameters
    void function3(int x, int y) {
        // do something with x and y
    }

    // function with return value and no parameters
    int function4() {
        // do something
        return 0;
    }

    // function with return value and one parameter
    int function5(int x) {
        // do something with x
        return 0;
    }

    // function with return value and two parameters
    int function6(int x, int y) {
        // do something with x and y
        return 0;
    }
    
    return 0;
}

//string manipulation
int stringManipulation()
{
    std::string s = "Hello, world!";

    // get the length of the string
    int length = s.length(); // 13

    // get the first character of the string
    char first = s[0]; // 'H'

    // get the last character of the string
    char last = s[length - 1]; // '!'

    // get a substring from the string
    std::string substring = s.substr(0, 5); // "Hello"

    // find the index of a character in the string
    int index = s.find('o'); // 4

    // find the index of a substring in the string
    int index = s.find("world"); // 7

    // replace a substring in the string
    s.replace(0, 5, "Goodbye"); // "Goodbye, world!"

    // remove a substring from the string
    s.erase(0, 9); // "world!"

    // insert a substring into the string
    s.insert(0, "Hello, "); // "Hello, world!"

    // append a substring to the string
    s.append("!"); // "Hello, world!!"

    // convert the string to uppercase
    std::string upper = s.upper(); // "HELLO, WORLD!!"

    // convert the string to lowercase
    std::string lower = s.lower(); // "hello, world!!"

    // convert the string to an integer
    int i = std::stoi(s); // 0

    // convert the string to a double
    double d = std::stod(s); // 0.0

    // convert the string to a boolean
    bool b = std::stob(s); // false
    
    return 0;
}