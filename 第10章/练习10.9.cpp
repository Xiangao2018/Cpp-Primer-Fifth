#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int main(int argc, char** argv)
{
	vector<string> svec = {"the", "quick", "red", "fox", "jump", "over", "the", "slow", "red", "turtle" };

	sort(svec.begin(), svec.end());

	for(const auto& v : svec)
	{
		cout << v << " "; // fox jump over quick red red slow the the turtle
	}

	cout << endl;

	// 返回一个不指向重复值范围末尾的迭代器， unique 返回迭代器指向最后一个不重复元素之后的位置
	auto end_unique = unique(svec.begin(), svec.end());

	svec.erase(end_unique, svec.end());

	for(const auto& v : svec)
	{
		cout << v << " "; // fox jump over quick red slow the turtle
	}

	cout << endl;


	return 0;
}