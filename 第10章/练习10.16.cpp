// 使用 lambda 编写你自拔本的 Biggies

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

void biggest(vector<string> &words,  vector<string>::size_type sz)
{	
	sort(words.begin(), words.end());	
	auto end_unique = unique(words.begin(), words.end());
	words.erase(end_unique, words.end());

	stable_sort(words.begin(), words.end(), [](const string &a, const string &b) { return a.size() < b.size(); });

	auto wc = find_if(words.begin(), words.end(), [sz](const string &a) {  return a.size() >= sz; });
	
	auto count = words.end() - wc;

	for_each(wc, words.end(), [](const string &a) { cout << a << " " ;});

	cout << endl;
}


int main(int argc, char* argv[])
{
	vector<string> svec = {"the", "quick", "red", "fox", "jump", "over", "the", "slow", "red", "turtle" };

	biggest(svec, 4);


	return 0;
}