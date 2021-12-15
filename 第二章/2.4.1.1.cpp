#include <iostream>

int main(int argc, char **argv) {

    {
        const int c1 = 1024;
        const int &r1 = c1;

        // // expression must be a modifiable lvalue
        // c1 = 100;
        // r1 = 100;        
    }

    {
        int c1 = 100;
        const int &r1 = c1;

        c1 = 200;
        std::cout << "Two " << r1 << " " << c1 << std::endl;
        std::cout << "Two " << &r1 << " " << &c1 << std::endl; // 地址一直
    }

    {
        int i = 42;
        const int &r1 = i;
        const int &r2 = 43;
        const int &r3 = r1 * 2; 
        int &r4 = r1 * 2; // on-const lvalue reference to type 'int' cannot bind to a temporary of type 'int'

        std::cout << "Three " << r1 << " " << r2 << std::endl;
    }

    {
        double dval = 3.14;
        const int &ri = dval;

        // &dval: 0x7ffee772b538 
        // &ri: 0x7ffee772b52c
        // 此两处的地址不一致，中间会生成一个临时的变量
        std::cout << "Third " << &dval << " " << &ri << std::endl;
    }


    

    
    return 0;
}