#include <iostream>

int main(int argc, char **argv)
{
    std::cout << "Enter two numbers " << std::endl;

    int sum = 0;
    int v1 = 0;
    int v2 = 0;

    std::cin >> v1 >> v2;

    if( v1 < v2  ) {
        v1 = v1 ^ v2;
        v2 = v1 ^ v2;
        v1 = v1 ^ v2;        
    }

    for( int val = v1; val >= v2; --val )
    {
        sum += val;
    }
    std::cout << "Sum is " << sum << std::endl;

    return 0;
}