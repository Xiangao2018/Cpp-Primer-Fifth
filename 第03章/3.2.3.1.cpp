#include <iostream>
#include <string>

using namespace std;

int main(int argc, char **argv)
{
    string s1 = "abcde";
    string s2 = "C++ 语言";

    for( auto c : s1 ) { // g++ 3.2.3.1.cpp -std11
        cout << c << " " << endl;
    }

    // 遍历出来的依旧是每个字符 s2 10 个字符
    for( auto c : s2 ) { // g++ 3.2.3.1.cpp -std11
        cout << c << " " << endl;
    }

    string s3 = "abc\0def"; // 3
    cout << s3 << ", size = " << s3.size() << endl;


    return 0;
}