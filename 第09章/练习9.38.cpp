#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char **argv)
{
	vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9};

	cout <<"v[0] = " << &v[0] << ", count = " << v.size() << ", capacity = " << v.capacity() << endl;

	v.push_back(10);

	cout <<"v[0] = " << &v[0] << ", count = " << v.size() << ", capacity = " << v.capacity() << endl;


	return 0;
}