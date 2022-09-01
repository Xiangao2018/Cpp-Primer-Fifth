#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
	// 返回的是 tie 对象的指针
	auto os = cin.tie();

	cout << &(*os) << endl;

	cout << &cout << endl;

	// cin 与 不在于其他的流关联
	auto os1 = cin.tie(nullptr);
	cout << &(*os1) << endl;

	return 0;
}