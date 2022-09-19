#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char* argv[])
{
	vector<int> v1(10, 1);

	for( const auto & i : v1 )
	{
		cout << i << " ";
	}

	// 1 1 1 1 1 1 1 1 1 1  count = 10, capacity = 10
	cout << " count = " << v1.size() << ", capacity = " << v1.capacity() << endl; 

	v1.resize(20);

	for( const auto & i : v1 )
	{
		cout << i << " ";
	}

	// 1 1 1 1 1 1 1 1 1 1 0 0 0 0 0 0 0 0 0 0  count = 20, capacity = 20
	cout << " count = " << v1.size() << ", capacity = " << v1.capacity() << endl;

	v1.resize(5);

	for( const auto & i : v1 )
	{
		cout << i << " ";
	}

	// 1 1 1 1 1  count = 5, capacity = 20
	cout << " count = " << v1.size() << ", capacity = " << v1.capacity() << endl;

	return 0;

}