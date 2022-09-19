#include <iostream>
#include <vector>
#include <list>
#include <forward_list>

using namespace std;

// 1.  如果 insert 会让 vector 重新申请新的空间 iter++ 可能会crash
// 2. 如果不会，那么就没问题，但是因为 iter 会被重新赋值，因此  iter++ 无意义
// ref: https://stackoverflow.com/a/73770144/9572831

int main(int argc, char* argv[])
{
	vector<int> vi = {1, 2, 3, 4, 5, 6, 7, 8};

	auto iter = vi.begin();

	while( iter != vi.end() )
	{
		if( *iter % 2 )
		{			
			iter = vi.insert(iter, *iter++);	
			iter += 2;
		}
		else
		{
			iter = vi.erase(iter);
		}		
	}

	for( auto i : vi)
	{
		cout << i << " ";
	}

	cout << endl;

	return 0;
}