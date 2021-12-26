#include <iostream>
#include <string>

using namespace std;

// 逐个比较字符
// 短的 < 长的
int main(int argc, char **argv)
{
    string s1 = "hello";
    string s2 = "Hello world!";
    string s3 = "Hiya";

    cout << (s1 < s2  ? "s1 < s2 " : "s1 > s2 ") << endl;

    cout << (s2 < s3  ? "s2 < s3 " : "s2 > s3 ") << endl;

    return 0;
}