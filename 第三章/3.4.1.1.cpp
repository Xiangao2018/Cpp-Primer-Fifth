#include <iostream>
#include <string>

using namespace std;

int main(int argc, char **argv)
{
    string s1 = "hello world!";
    
    for (string::iterator it = s1.begin(); it != s1.end(); ++it) {
        *it = toupper(*it);
    }
    cout << s1 << endl;

    string s2;
    // 空字符串的 begin 和 end 指向同一个地方
    if( s2.begin() == s2.end() ) {
        cout << "s2 is empty" << endl;
    }

    // 确保字符串非空
    if( s1.begin() != s1.end() ) 
    {
        string::iterator it = s1.begin();
        *it = toupper(*it);
    }

    cout << s1 << endl;

    return 0;
}