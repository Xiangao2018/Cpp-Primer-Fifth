#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char **argv)
{
    int ival;

    vector<int> ivec;

    while (cin >> ival)
    {
        ivec.push_back(ival);
    }

    for (vector<int>::size_type i = 0; i < (ivec.size() + 1) / 2; i++)
    {
        cout << ivec[i] + ivec[ivec.size() - 1 - i] << endl;
    }

    return 0;
}