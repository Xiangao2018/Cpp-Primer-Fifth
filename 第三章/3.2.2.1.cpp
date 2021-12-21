#include <iostream>
#include <string>

using namespace std;

int main(int argc, char **argv) 
{
    string s1;

    // cin 读取字符串，以空格分割，忽略收尾字符串
    cin >> s1;  
    cout << "s1 = " + s1 << ", size  = " << s1.size() << endl;

    // 读取 cin 整行，以换行符结束，读取包含换行符，但是string 中不包含
    // 如果 cin 第一个是换行符，那么string 就为空字符串
    string s2;
    getline(cin, s2);
    cout << "s2 = " + s2 << ", size  = " << s2.size() << endl;


    return 0;
}