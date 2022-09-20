#include <iostream>
#include <vector>

using namespace std;

// 编写程序，从一个 vector<char> 初始化一个 string

int main(int argc, char* argv[])
{
	vector<char> cvec = { 'a', 'b', 'c', 'd', 'e', 'f'};

	string s = string(cvec.begin(), cvec.end());

	cout << s << endl;

	return 0;
}