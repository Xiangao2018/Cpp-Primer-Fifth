#include <iostream>

int main(int argc, char **argv) {
    int ival = 1024;
    int &refVal = ival;

    // ival 与 refval 有相同的地址
    std::cout << &ival << std::endl; 
    std::cout << &refVal << std::endl;

    refVal = 100;    
    std::cout << refVal << ival << std::endl;
    std::cout << &ival << std::endl; 
    std::cout << &refVal << std::endl;

    ival = 200;
    std::cout << refVal << ival << std::endl;
    std::cout << &ival << std::endl; 
    std::cout << &refVal << std::endl;
    

    // int &refVal2;  // error: declaration of reference variable 'refVal2' requires an initializer

    // ival 与 refval2 有不一样的地址
    // int refVal2 = ival;
    // std::cout << &ival << std::endl;
    // std::cout << &refVal2 << std::endl;


    

    return 0;
}