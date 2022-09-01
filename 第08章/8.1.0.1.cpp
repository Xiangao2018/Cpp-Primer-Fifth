#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
    ifstream fromFile("thisFile.txt");
    if(  !fromFile )
    {
        cout << "Unable to open 'thisFile' for input";
        return -1;
    }
    
    ofstream toFile("That file");
    if( !toFile )
    {
        cout << "Unable to open 'ThatFile' for output";
        return -1;
    }

    char c;
    while( toFile && fromFile.get(c) ) toFile.put(c);

    return 0;
}