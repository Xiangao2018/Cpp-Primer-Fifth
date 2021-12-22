#include <iostream>
#include <string>

using namespace std;

int main(int argc, char **argv)
{
    string s1 = "hello world!";
    
    if( s1.begin() != s1.end() )
    {
        string::iterator it = s1.begin();
        *it = toupper(*it);
    }

    cout << s1 << endl;

    return 0;
}