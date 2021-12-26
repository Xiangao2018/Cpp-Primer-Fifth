#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    int i;
    double j;

    i = j = 3.5;
    cout <<  i << " "  << j << endl;

    j = i = 3.5;
    cout <<  i << " "  << j << endl;


    return 0;
}