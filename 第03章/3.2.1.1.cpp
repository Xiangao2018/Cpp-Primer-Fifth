#include <iostream>
#include <string>

using namespace std;

int main(int argc, char **argv) 
{
    string s1; // 空字符串
    string s2("Hello"); // 字符串字面值的副本 s2 不包含最后的空字符       // 直接初始化
    string s3 = "hiya"; // 字符串字面值得副本， s3 中不包含最后的字符 \0  // 拷贝初始化
    string s4(10,'c');  // 直接初始化

    cout << "s1 = " << s1 << ", size = " << s1.size() << endl;
    cout << "s2 = " << s2 << ", size = " << s2.size() << endl;
    cout << "s3 = " << s3 << ", size = " << s3.size() << endl;
    cout << "s4 = " << s4 << ", size = " << s4.size() << endl;
    
    string s5("Hello\0world");
    cout << s5 << ", size = " << s5.size() << endl;

    string s6 = "Hello\0world";
    cout << s6 << ", size = " << s6.size() << endl;

    return 0;
}