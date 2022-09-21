#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>

using namespace std;

int main(int argc, char** argv)
{
	vector<int> vi = {1, 1, 2, 2, 3, 3, 4, 5, 6};

	cout <<  accumulate(vi.begin(), vi.end(), 0) << endl;

	return 0;
}