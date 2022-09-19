#include <iostream>
#include <vector>
#include <list>
#include <forward_list>

using namespace std;


void testVector() 
{
	vector<int> iv1 = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

	auto iter = iv1.begin();

	while( iter != iv1.end() )
	{
		if( *iter % 2 )
		{
			iter = iv1.insert(iter, *iter);
			iter += 2;
		}
		else
		{
			iter = iv1.erase(iter);
		}
	}

	for( auto i : iv1)
	{
		cout << i << " ";
	}

	cout << endl;
}

void testList() 
{
	list<int> lst1 = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

	auto iter = lst1.begin();

	while( iter != lst1.end() )
	{
		if( *iter % 2 )
		{
			iter = lst1.insert(iter, *iter);

			// list 迭代器无法进行 += 2 操作
			iter ++;
			iter ++;
		}
		else
		{
			iter = lst1.erase(iter);
		}
	}

	for( auto i : lst1)
	{
		cout << i << " ";
	}

	cout << endl;
}

void testForwardList() 
{
	forward_list<int> lst1 = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

	auto current = lst1.begin();
	auto preview = lst1.before_begin();

	while( current != lst1.end() )
	{
		if( *current % 2 )
		{
			current = lst1.insert_after(current, *current);
			preview = current;
			current ++;
		}
		else
		{
			current = lst1.erase_after(preview);			
		}
	}

	for( auto i : lst1)
	{
		cout << i << " ";
	}

	cout << endl;
}

int main(int argc, char* argv[])
{
	
	testVector();
	testList();
	testForwardList();

	return 0;
}