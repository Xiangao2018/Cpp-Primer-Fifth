#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char **argv) 
{
    vector<int> ivec;

    int val;

    while( cin >> val )
    {
        ivec.push_back(val);
    }

    for( vector<int>::size_type i = 0; i < ivec.size(); i++ )
    {
        cout << ivec[i] <<  " ";
    }

    cout << endl;

    return 0;
}