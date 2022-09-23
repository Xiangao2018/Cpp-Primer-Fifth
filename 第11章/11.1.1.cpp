#include <iostream>
#include <map>
#include <string>
#include <unordered_map>
#include <set>
#include <unordered_set>

using namespace std;

int main(int argc, char **argv)
{
	map<string, string> map1 = { {"a", "v1"}, {"a", "v2"} };

	for_each(map1.begin(), map1.end(), [](const pair<string, string> &a) { cout << a.first << " " << a.second << endl; });

	multimap<string, string> map2 = { {"a", "v1"}, {"a", "v2"}, {"a", "v0"}  };
	for_each(map2.begin(), map2.end(), [](const pair<string, string> &a) { cout << a.first << " " << a.second << endl; });

	set<string> s1 = {"a", "a"};
	for_each(s1.begin(), s1.end(), [](const string &a) { cout << a << " "; });
	cout << endl;

	multiset<string> s2 = {"a", "a"};
	for_each(s2.begin(), s2.end(), [](const string &a) { cout << a << " "; });
	cout << endl;

	return 0;
}
