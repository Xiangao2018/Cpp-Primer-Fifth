#include <iostream>
#include <string>

using namespace std;

int main(int argc, char **argv)
{
    string s1(80, 'c');

    string::size_type size = s1.size();

    // size 与 length 表示的都是字节长度
    cout << "s1.size = " << s1.size() << " s1.length = " << s1.length() << endl;
    
    // 中文字符占三个字符长度,
    string s2( "C++ 语言学习" );
    cout << "s2.size = " << s2.size() <<  " s2.length = " << s2.length() << endl;

    for (string::size_type i = 0; i < s2.size(); i++ ) {
        char c = s2[i];
        cout << " " << c << endl;
    }
}