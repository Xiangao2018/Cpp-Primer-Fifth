#include <iostream>
#include <vector>
#include <list>

using namespace std;

int main(int argc, char** argv)
{
	int ia[] = {0, 1, 1, 2, 3 ,5, 8, 13, 21, 55, 89};	
	vector<int> v1(begin(ia), end(ia));

	for(const auto& i : v1)
	{
		cout << i << " ";
	}
	cout << endl;

	list<int> lst(begin(ia), end(ia));

	for(const auto& i : lst)
	{
		cout << i << " ";
	}

	cout << endl;

	// 删除偶数
	auto ivt = v1.begin();

	while(ivt != v1.end())
	{
		if( *ivt % 2 == 0 )
		{
			ivt = v1.erase(ivt);
		}
		else
		{
			++ivt;
		}
	}

	for(const auto& i : v1)
	{
		cout << i << " ";
	}
	cout << endl;

	// 删除奇数
	auto ilt = lst.begin();

	while(ilt != lst.end())
	{
		if( *ilt % 2 )
		{
			ilt = lst.erase(ilt);
		}
		else
		{
			++ilt;
		}
	}
	
	for(const auto& i : lst)
	{
		cout << i << " ";
	}

	cout << endl;



	return 0;
}