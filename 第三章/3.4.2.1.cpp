#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(int argc, char **argv) 
{
    vector<string> svec(10, "null");

    vector<string>::iterator beg = svec.begin();
    vector<string>::iterator end = svec.end();

    vector<string>::difference_type diff = beg - end; //  -10 
    vector<string>::difference_type diff1 = end - beg; // 10

    cout << diff << endl; 
    cout << diff1 << endl;

    return 0;
}