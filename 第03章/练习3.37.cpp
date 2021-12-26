#include <iostream>

using namespace std;

int main(int argc, char **argv)
{   
    // 未以 \0 结束，越界行为未知
    const char ca[] = { 'h', 'e', 'l', 'l', '0' };

    const char *cp = ca;

    while(  *cp )
    {
        cout << *cp << endl;

        ++cp;
    }

    return 0;
}