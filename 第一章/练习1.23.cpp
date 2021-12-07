#include <iostream>
#include "Sales_item.h"

// 当前做的是销售记录排序情况
int main(int argc, char **argv)
{
    std::cout << "请输入若干条销售记录" << std::endl;

    Sales_item item1, item2;
    int number = 1;

    if( std::cin >> item1 ) {
        while( std::cin >> item2 ) {
            if( item1.isbn() == item2.isbn() ) {
                number++;                
            } else {
                std::cout << item1.isbn() << " 共有 " << number << " 条销售记录" << std::endl;
                number = 1;
                item1 = item2;
            }
        }
        std::cout << item1.isbn() << "共有" << number << "条销售记录" << std::endl;

        return EXIT_SUCCESS;

    }  else {
        std::cerr << "请输入销售记录" << std::endl;
        return EXIT_FAILURE;
    }
}