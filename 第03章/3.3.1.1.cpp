#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char **argv)
{
    vector<string> svec;
    vector<int> ivec1(10, 10);
    vector<int> ivec2(ivec1); 
    vector<int> ivec3 = ivec2;

    vector<int> ivec4 {1, 2, 3, 4, 5}; // C++11 只能放在 {} 里面，不能放在 （）里面
    vector<int> ivec5 = {1, 2, 3, 4, 5}; // C++11 

    // ref 练习 3.13.cpp
}