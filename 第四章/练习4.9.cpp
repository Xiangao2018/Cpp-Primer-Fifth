#include <iostream>

using namespace std;

int main(int argc, char **argv)
{

    const char *cp = "Hello world";

    if( cp && *cp )
    {
        cout << "cp 里面指针地址值与上 cp 首字符 H 值 后的结果是否为 True" << endl;
    }
    
    return 0;
}