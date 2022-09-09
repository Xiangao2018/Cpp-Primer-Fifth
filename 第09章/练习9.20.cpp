#include <iostream>
#include <list>
#include <deque>

using namespace std;

int main(int argc, char** argv)
{
	list<int> lst1 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
	deque<int> d1;
	deque<int> d2;

	for(const auto &value : lst1)
	{
		if( value % 2 == 0 )
		{
			d1.push_back(value);
		}
		else
		{
			d2.push_back(value);
		}
	}

	for(const auto & v: d1)
	{
		cout << v << " ";
	}
	cout << endl;

	for(const auto & v: d2)
	{
		cout << v << " ";
	}
	cout << endl;

 }