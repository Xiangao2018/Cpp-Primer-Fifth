#include <iostream>
#include <string>

using namespace std;

int main(int argc, char **argv) 
{
    const string s1 = "你好, Cpp";

    // 类型不对，编译报错 
    // no viable conversion from '__wrap_iter<std::basic_string<char>::const_pointer>' to '__wrap_iter<std::basic_string<char>::pointer>'
    // for( string::iterator it = s1.begin(); it != s1.end(); ++it )
    for( string::const_iterator it = s1.begin(); it != s1.end(); ++it )
    {
        // cout << *it << endl; // 打印的是一个个字符
        cout << *it;
    }


    return 0;
}