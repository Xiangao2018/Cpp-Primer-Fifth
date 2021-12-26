#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    cout << -30 * 3 + 21 / 5 << endl; // -86
    cout << -30 + 3 * 21 / 5 << endl; // -24

    cout << 30 / 3 * 21 % 5 << endl; // 0

    cout << -30 / 3 * 21 % 4 << endl; // -2
    
    return 0;
}