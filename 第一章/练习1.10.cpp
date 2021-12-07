#include <iostream>

int main(int argc, char **argv)
{
    int sum = 0;
    int val = 10;

    while (val > 0) {
        sum += val;
        --val;
    }

    std::cout << "Sum of 10 to 0 is " << sum << std::endl;

    return 0;
}