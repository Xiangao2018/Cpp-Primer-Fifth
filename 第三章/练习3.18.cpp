#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char **argv)
{
    vector<int> ivec;

    // segmentation fault  ./a.out
    cout << ivec[0] << endl; 
    return 0;
}