#include <iostream>
#include "Sales_item.h"

int main(int argc, char **argv) {
    // Sales_item item1( "x-123456" );

    // Sales_item &rItem1 = item1;

    // std::cout << rItem1 << &rItem1 << std::endl;
    // std::cout << item1 << &item1 << std::endl;

    // Sales_item item2( "X-2222222" );
    // rItem1 = item2;
    // std::cout << rItem1 << &rItem1 << std::endl;
    // std::cout << item1 << &item1 << std::endl; 
    // std::cout << item2 << &item2 << std::endl;  


    Sales_item *item2 = new Sales_item("X-1111111");
    Sales_item &rItem2 = *item2;

    // 0x7fc981c05a70 0x7ffeeef546c8
    // 0x7fc981c05a70 0x7fc981c05a70
    std::cout << item2 << " " << &item2 << std::endl; 
    std::cout << &rItem2 << " " << &rItem2 << std::endl;

    Sales_item *item3 = new Sales_item("X-2222222");

    // 没有更改 rItem2 的引用，改了 rItem2 所引用的值
    rItem2 = *item3;

    // 0x7f82eec05a70 0x7ffee53386c8
    // X-2222222 0 0 0 0x7f82eec05a70
    // 0x7f82eec05aa0 0x7ffee5338690
    std::cout << item2 << " " << &item2 << std::endl;     
    std::cout << rItem2 << " " << &rItem2 << std::endl;
    std::cout << item3 << " " << &item3 << std::endl; 



    return 0;
}