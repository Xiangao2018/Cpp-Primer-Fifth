#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    int value = stoi(argv[1]);

    if( value % 2 == 0 )
    {
        cout << "偶数" << endl;
    }
    else
    {
        cout << "奇数" << endl;
    }
    
    return 0;
}