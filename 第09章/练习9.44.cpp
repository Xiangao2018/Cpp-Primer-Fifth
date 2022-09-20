#include <iostream>
#include <string>

using namespace std;

// 编写一个函数，接受三个 string 参数, s、oldValue 和 newValue。使用下标 和replace 函数将 s 中所有的 oldValue 替换为 newVal。

string replace(string& s, const string& oldValue, const string& newValue)
{
	return s;
}


int main(int argc, char* argv[])
{
	string s = "tho thi tho tho tttho";
	string oldValue = "tho";
	string newValue = "thought";
	cout << replace(s, oldValue, newValue) << endl;

	return 0;
}