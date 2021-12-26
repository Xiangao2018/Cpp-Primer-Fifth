#include <iostream>
#include "Sales_item.h"

// 测试引用对类
int main(int argc, char **argv) {
    Sales_item item1 = Sales_item("X-2013456");
    Sales_item &rItem1 = item1;
    
    // X-2013456 0 0 0 0x7ffeeba4c5f8
    // X-2013456 0 0 0 0x7ffeeba4c5f8
    std::cout << item1 << " " << &item1 << std::endl;    
    std::cout << rItem1 << " " << &rItem1 << std::endl;

    // X-7891234 0 0 0 0x7ffeef9f15f8
    // X-7891234 0 0 0 0x7ffeef9f15f8
    item1 = Sales_item("X-7891234");
    std::cout << item1 << " " << &item1 << std::endl;
    std::cout << rItem1 << " " << &rItem1 << std::endl;

    Sales_item *item2 = new Sales_item("X-1111111");
    Sales_item &rItem2 = *item2;

    // 0x7f96e34048b0 0x7ffee0817580  --- 指针有自己对象与地址，对象内容为数据地址，
    // 0x7f96e34048b0 0x7f96e34048b0  --- 引用指向的是内容的地址
    std::cout << item2 << " " << &item2 << std::endl;
    std::cout << &rItem2 << " " << &rItem2 << std::endl;

    item2 = new Sales_item("X-2222222");

    // 0x7f96e34048e0 0x7ffee0817580  --- 指针改变后，指针指向的内容数据地址发生改变，但指针自己地址没用改变
    // 0x7f96e34048b0 0x7f96e34048b0  --- 引用指向未发生改变
    std::cout << item2 << " " << &item2 << std::endl; 
    std::cout << &rItem2 << " " << &rItem2 << std::endl;
    

    return 0;
}