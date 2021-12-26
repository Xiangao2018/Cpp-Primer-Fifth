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

}