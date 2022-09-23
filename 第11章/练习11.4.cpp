#include <iostream>
#include <map>
#include <string>
#include <set>
#include <algorithm>

using namespace std;

int main(int argc, char **argv)
{
	map<string, size_t> word_count;

	string word;	
	while( cin >> word )
	{
		string result;
		copy_if(word.begin(), word.end(), back_inserter(result), [](unsigned char c) { return tolower(c) >= 'a' && tolower(c) <= 'z'; });
		transform(result.begin(), result.end(), result.begin(), [](unsigned char c) { return tolower(c); });

		++word_count[result];
	}

	for(const auto &w: word_count)
	{
		cout << w.first << ": " << w.second << endl;
	}
	
	return 0;
}