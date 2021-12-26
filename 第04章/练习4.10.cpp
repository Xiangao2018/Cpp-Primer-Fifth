#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    int value;

    while( cin >> value) {
        if( value == 42 )
            break;
    }
    
    return 0;
}