#include <iostream>
#include <vector>
#include <list>

using namespace std;

int main(int argc, char** argv)
{
	vector<int> v1 = {1, 3, 5, 7, 9, 12};
	list<int> v2 = {1, 3, 5, 7};		
	vector<int> v3(v2.begin(), v2.end());

	cout << (v1 < v3 ? "v1 < v3" : "v1 > v3") << endl;
	
	return 0;
}