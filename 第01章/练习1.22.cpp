#include <iostream>
#include "Sales_item.h"

int main(int argc, char **argv)
{
    Sales_item item1;
    Sales_item item;
    while( std::cin >> item1 )
    {
        item += item1;
    }

    std::cout << item;

    return 0;
}

