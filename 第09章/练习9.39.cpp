#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(int argc, char** argv)
{
	vector<string> svec;
	svec.reserve(1024); // capacity = 1024;

	cout  << "count = " << svec.size() << ", capacity = " << svec.capacity() << endl;

	string  word;

	while (cin >> word) 
	{
		svec.push_back(word); // size < 1024 时候，增加 size，不改变 capacity
	}

	svec.resize(svec.size() + svec.size() / 2); // 没啥影响

	cout  << "count = " << svec.size() << ", capacity = " << svec.capacity() << endl;

	return 0;
}