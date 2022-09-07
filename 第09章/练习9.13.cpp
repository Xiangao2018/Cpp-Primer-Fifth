#include <iostream>
#include <list>
#include <vector>

using namespace std;

int main(int argc, char** argv)
{
	list<int> lst1 = {1,2, 3, 4, 5, 6};

	// 使用迭代器变换即可
	vector<double> v1(lst1.begin(), lst1.end());

	for(auto i : v1)
	{
		cout << i << " ";
	}

	cout << endl;

	return 0;
}