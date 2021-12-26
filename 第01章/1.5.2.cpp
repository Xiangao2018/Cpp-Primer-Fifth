#include <iostream>
#include "Sales_item.h"

int main(int agrc, char **argv)
{
    Sales_item item1, item2;

    std::cin >> item1 >> item2;

    if( item1.isbn() == item2.isbn() ) {
        std::cout << item1 + item2 << std::endl;
        return EXIT_SUCCESS;        
    } else {
        std::cerr << "Data must refer to same ISBN" << std::endl;
        return EXIT_FAILURE;
    }    
}
