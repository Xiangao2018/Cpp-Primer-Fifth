#include <iostream>
#include <list>

using namespace std;

int main(int argc, char** argv)
{
	list<int> lst = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	// auto it = lst.begin();

	// while (it != lst.end())
	// {
	// 	if( *it % 2 )
	// 	{
	// 		it = lst.erase(it); // 指向 it 的下一个位置
	// 	}
	// 	else
	// 	{
	// 		++it;
	// 	}
	// }

	// auto elem1 = lst.begin();
	// auto elem2 = lst.begin();

	// lst.erase(elem1, elem2); // 如果两个迭代器相同，则不会删除任何元素


	// auto elem1 = lst.end();
	// auto elem2 = lst.end();

	// lst.erase(elem1, elem2); // 如果两个迭代器相同，则不会删除任何元素

	auto elem1 = lst.begin();
	auto elem2 = lst.end();

	lst.erase(elem1, elem2); // 删除迭代器之间的元素

	for( const auto& i : lst )
	{
		cout << i << " ";
	}

	return 0;
}