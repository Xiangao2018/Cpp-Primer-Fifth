#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>
#include <cstring>

using namespace std;

int main(int argc, char** argv)
{
	vector<char *> roster1 = {"abce", "abce", "abce", "abce", "ab"};
	vector<char *> roster2 = {"abce", "abce", "abce", "abce"};

	cout <<  equal(roster1.begin(), roster1.end(), roster2.begin()) << endl;

	return 0;
}