#include <iostream>
#include <string>

using namespace std;

int main(int argc, char **argv)
{
    string s = "C++ 语言";

    for( string::iterator it = s.begin(); it != s.end(); it++ ) {
        cout << *it << endl;
    }

    return 0;
}