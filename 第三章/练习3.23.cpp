#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(int argc, char **argv)
{
    vector<int> ivec(10);
    
    for (int i = 0; i <ivec.size(); i++) 
        ivec[i] = i;

    for(vector<int>::iterator it = ivec.begin(); it != ivec.end(); ++it )
        *it = *it * 2;

    for( vector<int>::size_type i = 0; i <ivec.size(); ++i) {
        cout << ivec[i] << " ";
    } 

    cout << endl;

    return 0;
}