#include <iostream>

int main(int argc, char **argv) {

    double dval = 3.14;
    const int &ri = dval;

    // &dval: 0x7ffee772b538 
    // &ri: 0x7ffee772b52c
    // 此两处的地址不一致，
    std::cout << &dval << " " << &ri << std::endl;

    
    return 0;
}