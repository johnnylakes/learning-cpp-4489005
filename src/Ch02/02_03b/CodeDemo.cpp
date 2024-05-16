// Learning C++ 
// Exercise 02_03
// Using Variables, by Eduardo Corpeño 

#include <iostream>

int a, b = 2; // single line comment
/*multi-line comment*/
int main(){
    bool my_flag;
    a = 4;
    my_flag = false;
    std::cout << "a =" << a << std::endl;
    std::cout << "b =" << b << std::endl;
    std::cout << "my_flag ="  << my_flag << std::endl;
    std::cout << "a + b ="  << a + b << std::endl;
    std::cout << "a - b ="  << a - b << std::endl;
    std::cout << "a / b ="  << a / b << std::endl;
    std::cout << "a * b ="  << a * b << std::endl;
    signed int positive;
    positive = - a - b;
    std::cout << "positive = " << positive << std::endl;
    
    std::cout << std::endl << std::endl;
    return (0);
}
