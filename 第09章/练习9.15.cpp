#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char** argv)
{
	vector<int> v1 = {1, 3, 5, 7, 9, 12};
	vector<int> v2 = {1, 3, 9};
	vector<int> v3 = {1, 3, 5, 7};
	vector<int> v4 = {1, 3, 5, 7, 9, 12};

	cout << (v1 < v2 ? "v1 < v2" : "v1 > v2") << endl;
	cout << (v1 < v3 ? "v1 < v3" : "v1 > v3") << endl;
	cout << (v1 == v4 ? "v1 == v4" : "v1 != v4") << endl;
	cout << (v1 == v2 ? "v1 == v2" : "v1 != v2") << endl;
	
	return 0;
}