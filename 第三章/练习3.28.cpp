#include <iostream>
#include <string>

using namespace std;


// 全局变量 系统会设置默认值，字符串为 ”“ 数字为 0

string sa[10]; 
int ia[10];

int main(int argc, char **argv)
{
    // 局部变量，值不确定，跟随系统
    string sa2[10];
    int ia2[10];

    for (int i = 0; i < 10; i++)
    {
        cout << sa[i] << " ";
    }
    cout << endl;
    
    for (int i = 0; i < 10; i++)
    {
        cout << ia[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < 10; i++)
    {
        cout << sa2[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < 10; i++)
    {
        cout << ia2[i] << " ";
    }
    cout << endl;

}