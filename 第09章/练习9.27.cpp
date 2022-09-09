#include <iostream>
#include <forward_list>

using namespace std;

int main(int argc, char** argv)
{
	forward_list<int> f = {1, 2,3, 4, 5, 6, 7, 8, 9, 10, 11};

	auto preview = f.before_begin();
	auto current 	 = f.begin();

	while (current != f.end())
	{
		if( *current % 2 )
		{
			current = f.erase_after(preview);
		}
		else
		{
			preview = current++;			
		}
	}


	for(const auto& i : f )
	{
		cout << i << " ";
	}

	return 0;
 }