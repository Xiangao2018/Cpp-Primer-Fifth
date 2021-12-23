#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main(int argc, char **argv)
{   
    string s1 = "Hello";
    string s2 = "Hello world";

    cout << ( s1 == s2 ? "相等" : "不相等" ) << endl;

    char c1[] = "Helloworld";
    char c2[] = "Hello world";

    cout << ( strcmp(c1, c2) == 0 ? "相等" : "不相等" ) << endl;
    

    return 0;
}