#include <iostream>

int main(int argc, char **argv)
{
    int sum = 0;
    int value = 0;

    while( std::cin >> value ) 
    {
        sum += value;
    }

    std::cout << "Sum is " << sum << std::endl;

    return 0;
}