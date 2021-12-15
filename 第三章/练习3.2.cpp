#include <iostream>
#include <string>
#include <stdio.h>

// using namespace std;
using std::cin;
using std::cout;
using std::string;
using std::endl;

int main(int argc, char **argv)
{
    string s1, s2;
    cin >> s1 >> s2; // 读取的时候会去掉空格 tab 等
    cout << s1 << s2 << endl;

    // https://stackoverflow.com/questions/5131647/why-would-we-call-cin-clear-and-cin-ignore-after-reading-input
    cin.clear();
    cin.ignore(INT_MAX, '\n');
    
    getline(cin, s1);
    getline(cin, s2);

    cout << "s1 = " + s1  << endl;
    cout << "s2 = " + s2 << endl;
}