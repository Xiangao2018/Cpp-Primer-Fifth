#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char **argv)
{
    int ia[10];
    int ia1[10];

    for (int i = 0; i < 10; i++)
    {
        ia[i] = i;
        ia1[i] = i;
    }

    bool ok = true;
    for (int i = 0; i < 10; i++)
    {
        if( ia[i] != ia1[i] )
        {
            ok = false;
        }
    }

    cout << ( ok ? "相等" : "不相等" ) << endl;

    vector<int> ivec1(10, 10);
    vector<int> ivec2(10, 11);

    if( ivec1 != ivec2 )
    {
        cout << "不相等" << endl;
    }
    else
    {
        cout << "相等" << endl;
    }

    return 0;
}