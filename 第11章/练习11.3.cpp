#include <iostream>
#include <map>
#include <string>
#include <set>

using namespace std;

int main(int argc, char **argv)
{
	map<string, size_t> word_count;

	string word;

	while( cin >> word )
		++word_count[word]; // 如果map 里面没有，就会创建一个默认的

	for(const auto &w: word_count)
	{
		cout << w.first << ": " << w.second << endl;
	}
	
	return 0;
}