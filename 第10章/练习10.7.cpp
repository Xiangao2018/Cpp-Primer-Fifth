#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <iterator>

using namespace std;


void questions1()
{
	vector<int> vec; 
	list<int> lst;
	int i;

	while( cin >> i )
		lst.push_back(i);

	copy(lst.begin(), lst.end(), back_inserter(vec));

	for(const auto& v : vec)
	{
		cout << v << " ";
	}

	cout << endl;
}

void questions2()
{
	vector<int> vec;
	vec.reserve(10);

	fill_n(back_inserter(vec), 10, 0);

	for(const auto& v : vec)
	{
		cout << v << " ";
	}

	cout << endl;
}

int main(int argc, char** argv)
{
	// questions1();
	questions2();


	return 0;
}