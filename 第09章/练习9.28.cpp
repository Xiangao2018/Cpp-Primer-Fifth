#include <iostream>
#include <string>
#include <forward_list>

using namespace std;

void handler(forward_list<string> &list, const string &s1, const string &s2)
{
	auto preview = list.before_begin();
	auto current = list.begin();

	bool contains = false;
	while( current != list.end() )
	{
		if( *current == s1 )
		{
			preview = current;
			current = list.insert_after( current, s2);
			contains = true;
		}
		else
		{
			preview = current++;
		}
	}

	if( !contains )
	{
		list.insert_after(preview, s2);
	}
}

int main(int argc, char **argv)
{
	forward_list<string> list = { "aaa", "bbb", "ccc", "ddd", "bbb" };

	handler(list, "bbb", "eee");

	for(const auto & v : list)
	{
		cout << v << " ";
	}

	cout << endl;

	handler(list, "fff", "ggg");

	for(const auto & v : list)
	{
		cout << v << " ";
	}

	cout << endl;

	return 0;
}
