#include <iostream>
#include <cstring>


int f(int x) {
    return sizeof(x);
}


int f(double x) {
    return sizeof(x);
}


struct MyStruct {
    int a;
    double b;
};

int f(MyStruct x) {
    return sizeof(x);
}


int f(const char* x) {
    return strlen(x);
};

int main() {
    int intValue = 42;
    double doubleValue = 3.14;
    MyStruct structValue{}; 
    const char* stringValue = "Hello";

    std::cout << "Size of int: " << f(intValue) << " bytes" << std::endl;
    std::cout << "Size of double: " << f(doubleValue) << " bytes" << std::endl;
    std::cout << "Size of struct MyStruct: " << f(structValue) << " bytes" << std::endl;
    std::cout << "Length of string: " << f(stringValue) << " characters" << std::endl;

    return 0;
}
