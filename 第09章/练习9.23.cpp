#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char** argv)
{
	vector<int> c = {1};

	auto val1 = *c.begin(), val2 = c.front();

	auto last = c.end(); // begin 和 end 是迭代器，front 和 back 是首位元素的引用

	auto val3 = *(--last);
	auto val4 = c.back();


	cout << val1 << " " << val2 << " " << val3 << " " << val4 << endl;

	return 0;
}