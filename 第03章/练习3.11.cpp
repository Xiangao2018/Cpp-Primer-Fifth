#include <iostream>
#include <string>

using namespace std;

int main(int argc, char **argv) 
{
    const string s = "Keep out!";

    for( auto &c : s )
    {
        cout << typeid(c).name() << endl; // c 
    }

    // g++ 练习3.11.cpp -std=c++11 
}