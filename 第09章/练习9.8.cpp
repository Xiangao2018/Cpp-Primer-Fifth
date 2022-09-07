#include <iostream>
#include <string>
#include <list>

using namespace std;

// 为了读取string 的 list 的元素，应该使用什么类型？如果写入 list，又应该使用什么类型

int main(int argc, char**argv)
{
	list<string> lst1 = { "a", "b", "c", "d", "e", "f"};

	// 写入 auto &
	for (auto &str : lst1)
	{
		str = str + "1";
	}

	// 读取 const auto &
	for (const auto &str : lst1)
	{
		cout << str << " ";
	}

	cout << endl;

	return 0;
}