#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main(int argc, char **argv)
{
    string s1; 
    getline(std::cin, s1);

    // c++11
    // for( char &c : s1 ) {
    //     if( isalpha(c) ) {
    //         c = 'X';
    //     }
    // }

    for (string::size_type i = 0; i < s1.size(); i++)
    {
        char &c = s1[i];
        if( isalpha(c) )
        {
            c = 'X';
        }
    }
    
    cout << s1 << endl;
    
    return 0;
}