#include <iostream>
#include <vector>

using namespace std;


// 为了索引 int 的 vector 中的元素，应该使用什么类型

int main(int argc, char** argv)
{
	vector<int> iv{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

	// 方式一: 使用 auto& 可以进行写, 可以更改里面的元素
	for( auto& i : iv )
	{
		i = i + 1;
	}

	// 方式二：使用 const auto &, 只可以访问，不可以写
	for( const auto &i : iv )
	{
		cout << i << " ";
	}
	cout << endl;

	// 方式三：使用迭代器  
	for( auto it = iv.begin(); it != iv.end(); ++it )
	{
		cout << *it << " ";
	}	
	cout << endl;

	
	return 0;
}