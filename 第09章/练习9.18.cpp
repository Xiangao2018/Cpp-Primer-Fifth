#include <iostream>
#include <string>
#include <deque>

using namespace std;

int main(int argc, char** argv)
{
	deque<string> d1;
	string word;

	while(  cin >> word )
		d1.push_back(word);


	for(const auto& value : d1)
	{
		cout << value << " ";
	}

	cout << endl;

	for(auto it = d1.begin(); it != d1.end(); ++it)
	{
		cout << *it << " ";
	}
	cout << endl;

	return 0;
}
