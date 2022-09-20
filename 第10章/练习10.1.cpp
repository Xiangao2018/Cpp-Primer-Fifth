#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(int argc, char** argv)
{
	vector<int> vi = {1, 1, 2, 2, 3, 3, 4, 5, 6};

	cout <<  count(vi.begin(), vi.end(), 1) << endl;

	return 0;
}