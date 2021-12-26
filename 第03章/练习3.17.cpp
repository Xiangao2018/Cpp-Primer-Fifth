#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char **argv)
{
    string sval;

    vector<string> svec;

    while(cin>>sval) {
        svec.push_back(sval);
    }

    for(vector<string>::size_type i=0; i<svec.size(); i++)
    {
        string val = svec[i];
        for(string::size_type j=0; j < val.size(); j++)
        {
            char &c = val[j];
            c = toupper(c);
        }

        cout << val << endl;
    }
    return 0;
}