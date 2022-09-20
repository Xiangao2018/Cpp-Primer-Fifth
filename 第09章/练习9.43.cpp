#include <iostream>
#include <string>

using namespace std;

// 编写一个函数，接受三个 string 参数, s、oldValue 和 newValue。使用迭代器以及 insert 和 erase 函数将 s 中所有的 oldValue 替换为 newVal。


string replace(string& s, const string& oldValue, const string& newValue)
{
	auto iter = s.begin();

	while (iter != s.end())
	{
		if( string(iter, iter + oldValue.size()) == oldValue)
		{	
			iter = s.erase(iter, iter + oldValue.size());
			iter = s.insert(iter, newValue.begin(), newValue.end());

			iter += newValue.size();
		}
		else
		{
			++iter;
		}
	}

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