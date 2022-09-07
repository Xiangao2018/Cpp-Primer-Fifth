#include <iostream>
#include <list>
#include <vector>

using namespace std;

int main(int argc, char** argv)
{
	list<const char*> lst1 = {"i", "am", "a", "char" };

	vector<string> v1;

	v1.assign(lst1.begin(), lst1.end());

	for (const auto &i : v1)
	{
		cout << i << endl;
	}

	vector<string> v2(lst1.begin(), lst1.end());
	for (const auto &i : v2)
	{
		cout << i << endl;
	}


	return 0;
}