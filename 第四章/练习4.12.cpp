#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    int i = 10;
    int j = 20;
    int k = 30;

    cout << ( i != j < k  )<< endl;
    cout << ( i != ( j < k )  )<< endl;

    return 0;
}