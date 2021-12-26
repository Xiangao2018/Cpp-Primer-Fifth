#include <iostream>

int main(int argc, char **argv) {
    int *ip, i, &r = i;

    std::cout << i << r << std::endl;

    ip = &i;

    *ip = 0;

    int *ip1, ip2;

    // ip1 是指针
    // ip2 是变量

    return 0;
}