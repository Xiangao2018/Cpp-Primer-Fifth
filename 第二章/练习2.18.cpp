#include <iostream>

int main(int argc, char **argv) {
    int a = 10;
    int b = 20;

    int *p = nullptr;

    p = &a;
    std::cout << p << " " << *p << " " << a << " " << &a << std::endl;
    *p = 20;
    std::cout << p << " " << *p << " " << a << " " << &a << std::endl;
    p = &b;
    std::cout << p << " " << *p << " " << b << " " << &b << std::endl;

    return 0;
}