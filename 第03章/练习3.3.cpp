#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

int main(int argc, char **argv) 
{
    string s1, s2;
    
    cin >> s1 >> s2; // 读取会丢掉前面的 Tab 空格 \n
    cout << s1 << " " << s2 << endl;

    cin.clear();
    cin.ignore(INT_MAX, '\n');

    getline(cin, s1); // 去读整行，不会丢失对应内容
    getline(cin, s2); 

    cout << s1 << " " << s2 << endl;

    return 0;
}