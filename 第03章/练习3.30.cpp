#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    constexpr size_t arr_size = 10;

    int ia[arr_size];

    // 不能使用 <=
    for (size_t i = 0; i < arr_size; i++) 
    {
        ia[i] = i;
    }

    return 0;
}