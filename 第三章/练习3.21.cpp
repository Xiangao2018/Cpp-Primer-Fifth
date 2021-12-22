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

    for(vector<int>::iterator it = v1.begin(); it != v1.end(); ++it)
    {
        cout << *it ;
    }
    cout <<endl;


    for(vector<int>::iterator it = v1.begin(); it != v1.end(); ++it)
    {
        cout << *it ;
    }
    cout <<endl;

    for(vector<int>::iterator it = v2.begin(); it != v2.end(); ++it)
    {
        cout << *it ;
    }
    cout <<endl;

    for(vector<int>::iterator it = v3.begin(); it != v3.end(); ++it)
    {
        cout << *it ;
    }
    cout <<endl;

    for(vector<int>::iterator it = v4.begin(); it != v4.end(); ++it)
    {
        cout << *it ;
    }
    cout <<endl;

    for(vector<int>::iterator it = v5.begin(); it != v5.end(); ++it)
    {
        cout << *it ;
    }
    cout <<endl;

    for(vector<string>::iterator it = v6.begin(); it != v6.end(); ++it)
    {
        cout << *it ;
    }
    cout <<endl;

    for(vector<string>::iterator it = v7.begin(); it != v7.end(); ++it)
    {
        cout << *it ;
    }
    cout <<endl;
}