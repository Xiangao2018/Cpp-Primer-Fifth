#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char **argv)
{
    int array[] = {0, 1, 2, 3, 4, 5, 6};

    vector<int> ivec( begin(array), end(array));

    for( vector<int>::iterator i = ivec.begin(); i != ivec.end(); ++i) {
        cout << *i << endl;
    }

    return 0;
}