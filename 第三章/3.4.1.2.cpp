#include <iostream>
#include <string>

using namespace std;

int main(int argc, char **argv)
{
    string s = "C++ Language 学习";

    for( string::iterator it = s.begin(); it != s.end(); it++ ) {
        *it = tolower(*it);
    }
    cout << s << endl;
    
    // auto is C++11， using --std=c++11
    for( auto it = s.begin(); it != s.end() && !isspace(*it); ++it ) {
        *it = toupper(*it);
    }

    cout << s << endl;

    return 0;
}