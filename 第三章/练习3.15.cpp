#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char **argv)
{
    vector<string> svec;
    string sval;
    while( cin >> sval )
    {
        svec.push_back(sval);
    }

    cout << svec.size() << endl;

    return 0;
}