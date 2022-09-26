#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(int argc, char** argv)
{
	// 栈区
	int i = 100;

	// pi 是一个 int 类型指针，&pi 是栈区地址
	// pi 保存的值是堆的内存
	int *pi = new int(100);

	cout << &i << endl; // 0x7ff7b593a6fc

	cout << pi << " " << &pi << endl; // 0x600003b70000 0x7ff7b593a6f0

	return 0;
}
