#include <iostream>

int main(int argc, char **argv)
{
    int sum = 0;

    for( int val = 50; val <= 100; ++ val )
    {
        sum += val;
    }

    std::cout << "Sum of 50 to 100 inclusive is " << sum << std::endl;

    sum = 0;
    for( int val = 10;  val >= 0; --val )
    {
        sum += val;
    }

    std::cout << "Sum of 10 to 0 inclusive is " << sum << std::endl;

    
    std::cout << "Enter two numbers " << std::endl;
    int v1 = 0; 
    int v2 = 0;

    std::cin >> v1 >> v2;

    sum = 0;
    for( int val = v1; val <= v2; ++val )
    {
        sum += val;
    }

    std::cout << "Sum of " << v1 << " to " << v2 << " inclusive is " << sum;

    return 0;
}