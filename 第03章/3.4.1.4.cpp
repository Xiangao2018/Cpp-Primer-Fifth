#include <iostream>
#include <string>

using namespace std;

int main(int argc, char **argv)
{
    string s1 = "你好, Cpp";

    // it 类型为 string::iterator
    for(auto it = s1.begin(); it != s1.end(); ++it)
    {

    }

    // 类型为 string::iterator
    for( string::iterator it = s1.begin(); it != s1.end(); ++it )
    {

    }

    // cbegin 和 cend 类型为 string::const_iterator
    for( string::const_iterator it = s1.cbegin(); it != s1.cend(); ++it )
    {

    }
    
    return 0;
}