#include <iostream>
#include <string>

using namespace std;

int main(int argc, char **argv) 
{
    string s1, s2;

    cin >> s1 >> s2; // 读取

    cout << (( s1 < s2 ) ? s1 : s2) << endl;
    cout << (s1.size() > s2.size() ? s1 : s2) << endl;
}