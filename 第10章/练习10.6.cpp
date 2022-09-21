#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(int argc, char** argv)
{
	vector<int> vi = {1, 2, 3, 4, 5, 6, 7, 8, 9};

	fill_n(vi.begin(), vi.size(), 10);

	for(const auto& v : vi)
	{
		cout << v << " ";
	}

	cout << endl;

	return 0;
}