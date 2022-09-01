#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    // 回车刷新缓冲器
    cout << "hi" << endl;    

    // 刷新输出缓冲区， 不会插入任何字符
    cout << "hi" << flush;

    // 刷新输出缓冲区，插入一个空格
    cout << "hi" << ends;


    // 会立即刷新输出缓冲区
    cout << unitbuf;

    cout << "hi";

    cout << nounitbuf;
    
    return 0;
}