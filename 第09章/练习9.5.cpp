#include <iostream>
#include <vector>

using namespace std;

// 返回一个迭代器指向找到的元素，必须处理未找到的情况

vector<int>::const_iterator find( const vector<int> &iv, const int key )
{
	for( auto it = iv.cbegin(); it != iv.cend(); ++it )
	{
		if( *it == key )
			return it;
	}

	return iv.end();
}


int main(int argc, char** argv)
{
	vector<int> iv = { 1, 5, 7, 9, 15, 20, 30, 44, 23 };

	int value;
	cin >> value;

	auto result = find(iv, value);

	if( result != iv.cend() )
	{
		cout << "find" << endl;
	}
	else
	{
		cout << "not find" << endl;
	}


	return 0;
 }