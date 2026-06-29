#include <iostream>
#include <string>

int main()
{
    std::string string = "HI THIS IS BRAIN";
    std::string *ptr = &string;
    std::string &ref = string;
    std::cout << "Address string: " << &string << '\n';
    std::cout << "Address ptr: " << ptr << '\n';
    std::cout << "Address ref: " << &ref << '\n';
    std::cout << std::endl;
    std::cout << "Value string: " << string << '\n';
    std::cout << "Value ptr: " << *ptr << '\n';
    std::cout << "Value ref: " << ref << '\n';
    return (0);
}