#include <iostream>
#include <list>

using namespace std;

int main(int argc, char const *argv[])
{
	
	list<int> lst1 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};

	list<int>::iterator item1 = lst1.begin(), item2 = lst1.end();

	while (item1 != item2 )
	{
		cout << *item1 << " ";

		item1++;
	}


	return 0;
}