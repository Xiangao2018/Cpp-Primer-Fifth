#include <iostream>
#include <algorithm>
#include <vector>
#include <string>


using namespace std;

int main(int argc, char** argv)
{
	vector<string> vi = {"aaa", "aaa", "bbbb", "bbbb"};

	cout <<  count(vi.begin(), vi.end(), "ccc") << endl;
	cout <<  count(vi.begin(), vi.end(), "aaa") << endl;

	return 0;
}