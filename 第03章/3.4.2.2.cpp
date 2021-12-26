#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

int main(int argc, char **argv)
{
    vector<int> ivec;
    for (int i = 0; i < 20; i++)
    {
        ivec.push_back(i);
    }

    auto beg = ivec.begin();
    auto end = ivec.end();

    auto mid = ivec.begin() + (end - beg) / 2;

    // 从终端传入需要的值
    int sought = std::stoi( argv[1] );
    cout << sought << endl;

    while( mid != end && *mid != sought )
    {
        if( sought < *mid )
        {
            end = mid;

            cout << "mid = " << *mid << endl;
        }
        else
        {
            beg = mid + 1;
        }

        mid = beg + (end - beg) / 2;
    }
    
    if( mid == end )
    {
        cout << sought << " NOT Found Max" << endl; 
    }
    else if(  *mid == sought )
    {
        cout << sought  << " Found" << endl;
    }

    return 0;
}

