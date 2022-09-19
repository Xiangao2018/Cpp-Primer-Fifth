#include <iostream>
#include <vector>

using namespace std;

// 在本节最后一个例子中，如果不将 insert的结果赋予给 begin, 将会发生什么？
// vector 插入后，可能会重新申请新的空间，那么就可能会 crash


int main(int argc, char **argv)
{
	vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9};

	auto begin = v.begin();

	while (begin != v.end())
	{
		++begin;
		begin = v.insert(begin, 42);
		++begin;		
	}

	for (const auto& i : v)
	{
		cout << i << " ";
	}

	return 0;
}