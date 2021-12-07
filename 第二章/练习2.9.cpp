#include <iostream>

int main(int argc, char **argv) {
    /* std::cout << int inputVale;  */

    int i = { 3.14 };
    std::cout << i << std::endl;

    double salary  /* = wage */ = 9999.99;
    std::cout << salary /* << wage */ << std::endl;

    int i2 = 3.14;
    std::cout << i2 << std::endl;

    /* int i3 { 3.14 }; */ // C++11 语法

    int i4(3.14);
    std::cout << i4 << std::endl;

    return 0;
}