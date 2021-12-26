#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char **argv)
{
    constexpr size_t arr_size = 10;

    int ia[arr_size];

    for (size_t i = 0; i < arr_size; i++) 
    {
        ia[i] = i;
    }

    int ia2[arr_size];

    for (size_t i = 0; i < arr_size; i++) 
    {
        ia2[i] = ia[i];
    }

    vector<int> ivec1(10);
    for (size_t i = 0; i < arr_size; ++i) 
    {
        ivec1[i] = i;
    }

    vector<int> ivec2( ivec1 );
    
    return 0;
}