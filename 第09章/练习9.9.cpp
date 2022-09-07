// begin 和 cbegin 两个函数有什么不同？ 

/*
相同点：
	begin 和 cbegin 都指向容器的第一个元素位置

不同点：
	begin 是 ::iterator, cbegin 是 const_iterator, 若容器是 const, begin 也返回 const_iterator
*/

#include <iostream>
#include <string>
#include <list>

using namespace std;


int main(int argc, char* argv[])
{
	list<string> lst1 = { "a", "b", "c", "d", "e", "f"};

	for (auto it = lst1.begin(); it != lst1.end(); ++it)
	{
		*it = *it + "2";
	}

	for (auto it = lst1.begin(); it != lst1.end(); ++it)
	{
		cout << *it << " ";
	}

	return 0;
}