#include <iostream>
#include <string>


using namespace std;

int main(int argc, char **argv)
{
    int ia[10];

    for (int i = 0; i < 10; i++)
    {
        ia[i] = i;
    }

    int *p1 = ia;
    int *p2 = &ia[3];

    // 如果该值造成数组越界就非法
    p2 += (p2 - p1);

    cout << *p2 << endl;

    return 0;
}