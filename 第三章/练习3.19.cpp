#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char **argv)
{
    vector<int> ivec1{10, 42};

    vector<int> ivec2 = {42, 42, 42, 42, 42, 42, 42, 42, 42, 42};
    vector<int> ivec3{42, 42, 42, 42, 42, 42, 42, 42, 42, 42};

    vector<int> ivec4;

    for(int i=0; i< 10; i++)
    {
        ivec4.push_back(42);
    }

    return 0;
}