#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(int argc, char **argv)
{
    vector<int> v1;  // 没有元素
    vector<int> v2(10); // 10 个元素,每个值为 0
    vector<int> v3(10, 42); // 10 个元素，每个都是 42；
    vector<int> v4{10}; // 1 个元素 值为 10
    vector<int> v5{10, 42}; // 2 个元素 值为 10 跟 42
    vector<string> v6{10};  // 10个元素，每个元素值为空字符串
    vector<string> v7{10, "hi"}; // 10 个元素，每个值都是 hi

    for (vector<int>::size_type i = 0; i < v1.size(); i++ )
    {
        cout << v1[i] << " " ;
    }
    cout << endl;

    for (vector<int>::size_type i = 0; i < v2.size(); i++ )
    {
        cout << v2[i] << " " ;
    }
    cout << endl;

    for (vector<int>::size_type i = 0; i < v3.size(); i++ )
    {
        cout << v3[i] << " " ;
    }
    cout << endl;

    for (vector<int>::size_type i = 0; i < v4.size(); i++ )
    {
        cout << v4[i] << " " ;
    }
    cout << endl;

    for (vector<int>::size_type i = 0; i < v5.size(); i++ )
    {
        cout << v5[i] << " " ;
    }
    cout << endl;

    for (vector<int>::size_type i = 0; i < v6.size(); i++ )
    {
        cout << v6[i] << " " ;
    }
    cout << endl;

    for (vector<int>::size_type i = 0; i < v7.size(); i++ )
    {
        cout << v7[i] << " " ;
    }
    cout << endl;

    return 0;
}