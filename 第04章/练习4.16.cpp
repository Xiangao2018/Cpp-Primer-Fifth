#include <iostream>

using namespace std;

int *getPtr() 
{
    int a = 0; 

    cout << &a  << endl;
    return &a; 
}

int main(int argc, char **argv)
{
    int *p = getPtr();
    cout << p << endl;

    if( (p = getPtr()) != 0 ) // = 为赋值操作，优先级低于 != 
    {

    }

    int i = 0;
    if( i = 1024 ) // 赋值操作
    {

    }
}