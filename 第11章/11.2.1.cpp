#include <iostream>
#include <map>
#include <string>
#include <set>

using namespace std;

int main(int argc, char **argv)
{
	map<string, string> map1;
	map1["index"] = "10";
	map1["index"] = "20";

	for_each(map1.begin(), map1.end(), [](const pair<string, string> &a) { cout << a.first << " " << a.second << endl; });

	// 有序的集合
	set<string> s1;
	s1.insert("a");
	s1.insert("c");
	s1.insert("b");

	for_each(s1.begin(), s1.end(), [](const string &a) { cout << a << " "; });
	cout << endl;

	return 0;
}
