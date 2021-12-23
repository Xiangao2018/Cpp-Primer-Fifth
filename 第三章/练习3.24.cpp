#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(int argc, char **argv)
{
    vector<int> ivec;

    int ival;

    while( cin >> ival )
        ivec.push_back(ival);

    cout << "ivec size  = " << ivec.size() << endl;

    vector<int>::iterator beg = ivec.begin();
    vector<int>::iterator end = ivec.end();

    cout << end - beg << endl;

    for( vector<int>::iterator it = beg; it <= beg + ( end - beg) / 2 ; ++it )
    {
        cout << "第 " << it - beg << " 个值 + 第 " << (ivec.size() - (it - beg)) << " 个值 = " << *it << " + " << *(end - (it - beg) - 1) << " = " << *it + *(end - (it - beg) - 1) << endl;
    }   

    return 0;
}