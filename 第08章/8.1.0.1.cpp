#include <iostream>
#include <string>

using namespace std;

int main(int argc, char **argv)
{
    int age;

    cin >> age;

    cout << "Bad = " << ( cin.bad() ? "True" : "False" ) << endl; // 0x1;
    cout << "Eof = " << ( cin.eof() ? "True" : "False" ) << endl; // 0x2; // ctrl + D 文件结束
    cout << "fail = " << ( cin.fail() ? "True" : "False" ) << endl; // 0x4;
    cout << "Good = " << ( cin.good() ? "True" : "False" ) << endl; // 0x0;
    
    cout << "cin.iostate = " << cin.rdstate() << endl;

    return 0;
}