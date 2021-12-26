#include <iostream>

// 2.16 所有的结果都是对的
int main(int argc, char **argv) {

    int i = 0, &r1 = i;
    double d = 0, &r2 = d;

    r2 = 3.14159;
    std::cout << r2 << " " << d << std::endl;

    r2 = r1;
    std::cout << r2 << " " << d << std::endl;
    std::cout << r1 << " " << i << std::endl;

    i = r2;
    std::cout << r2 << " " << d << std::endl;
    std::cout << r1 << " " << i << std::endl;

    r1 = d;
    std::cout << r2 << " " << d << std::endl;
    std::cout << r1 << " " << i << std::endl;

    return 0;
}