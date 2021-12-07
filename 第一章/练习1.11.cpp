#include <iostream>

int main(int argc, char **argv)
{
    std::cout << "Enter two numbers " << std::endl;

    int v1 = 0; 
    int v2 = 0; 

    std::cin >> v1 >> v2;

    int sum = 0;
    int val = v1;
    while (val <= v2 )
    {
        sum += val;
        val++;
    }

    std::cout << "Sum of " << v1 << " to " << v2 << " is " << sum << std::endl;
    
    return 0;
}