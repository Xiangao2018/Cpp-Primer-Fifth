#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>

using namespace std;

int main(int argc, char** argv)
{
	vector<double> vi = {1.0, 1.0, 2.0, 2.0, 3.0, 3.0, 4.0, 5.0, 6.0};

	cout <<  accumulate(vi.cbegin(), vi.cend(), 0) << endl;

	return 0;
}