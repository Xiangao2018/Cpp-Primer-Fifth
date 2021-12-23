#include <iostream>
#include <cstring>

using namespace std;

int main(int argc, char **argv)
{   
    char c1[] = "Helloworld";
    char c2[] = "Hello world";

    // 长度不好确定
    char c3[1000];

    strcpy(c3, c1);
    strcat(c3, c2);

    cout << c3 << endl;
    

    return 0;
}