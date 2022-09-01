#include <iostream>
#include <string>

using namespace std;




int main(int argc, char **argv)
{
    int age;

    while( cin >> age )
        cout << age << endl;

    cout << "Bad = " << ( cin.bad() ? "True" : "False" ) << endl; // 0x1;
    cout << "Eof = " << ( cin.eof() ? "True" : "False" ) << endl; // 0x2; // ctrl + D 文件结束
    cout << "fail = " << ( cin.fail() ? "True" : "False" ) << endl; // 0x4;
    cout << "Good = " << ( cin.good() ? "True" : "False" ) << endl; // 0x0;
    
    cout << "cin.iostate = " << cin.rdstate() << endl;

    // 清除位置后，然后忽略掉上次已经输入的在缓冲区的内容
    cin.clear();
    cin.ignore(1000, '\n');

    // 清除流状态后，再次从 cin 读取
    // 如果没有调用 cin.ignore(1000, '\n'); 里面就会用上次的状态值.
    std::string str;
    while( cin >> str )
        cout << str << endl;

    return 0;
}