#include <iostream>
#include <string>

using namespace std;

int main(int argc, char **argv) 
{
    string s1;
    string s2;

    while( cin >> s1 ) { // mac: Ctrl + D cancel 
        s2 += ( s1 + " " );
    }

    cout << s2 << endl;

    return 0;
}