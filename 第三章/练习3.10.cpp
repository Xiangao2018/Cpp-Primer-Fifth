#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main(int argc, char **argv) 
{
    string s1, s2;

    cin >> s1;

    for( string::size_type i = 0; i < s1.size(); i++ )
    {
        char c = s1[i];

        if( !ispunct(c) ) {
            s2 += c;
        }
    }
    cout << s2  << endl; 

    return 0;
}