#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

bool isShorter(const string &s1, const string &s2)
{
	return s1.size() < s2.size();
}

int main(int argc, char** argv)
{
	vector<string> svec = {"the", "quick", "red", "fox", "jump", "over", "the", "slow", "red", "turtle" };

	sort(svec.begin(), svec.end(), isShorter); // the red red fox the over jump slow quick turtle

	for(const auto& v : svec)
	{
		cout << v << " "; 
	}

	cout << endl;

	stable_sort(svec.begin(), svec.end());

	for(const auto& v : svec)
	{
		cout << v << " ";  // fox jump over quick red red slow the the turtle
	}

	cout << endl;

}