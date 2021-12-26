#include<iostream>
#include<string>

using namespace std;

int main(int argc, char **argv) 
{
    string s = "hello. cpp language \n hello. cpp language \n hello. cpp language";

    for( string::iterator it = s.begin(); it != s.end(); ++it )
    {
        if( *it == '\n' )
            break;

        *it = toupper(*it);
    }

    cout << s << endl;

    return 0;
}