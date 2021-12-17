#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(int argc, char **argv) 
{
    vector<vector<string> >ivec;
    //no viable conversion from 'vector<vector<std::string>>' to 'vector<std::string>'
    /* vector<string> svec = ivec; */

    vector<string> svec(10, "null");

    cout << svec[0] + " " + svec[9] << endl;

    return 0;
}