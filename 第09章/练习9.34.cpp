#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char **argv)
{
	vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9};

	auto iter = v.begin();

	while (iter != v.end())
	{
		if( *iter % 2 )
		{
			// insert 返回的是插入元素的迭代器
			iter = v.insert(iter, *iter);
		}
		// 一直在第一个奇数前面插入，永无止尽
		++iter;
	}

	for (const auto& i : v)
	{
		cout << i << " ";
	}

	return 0;
}