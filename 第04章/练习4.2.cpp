#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char **argv)
{
    // --std=c++11
    vector<int> ivec = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    cout << *ivec.begin() << " "<< *(ivec.begin()) << endl;
    cout << *ivec.begin() + 1 << " "<< (*ivec.begin()) + 1 << endl;
    
    return 0;
}