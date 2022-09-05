#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char** argv)
{
	vector<int> iv = { 1, 5, 7, 9, 15, 20, 30, 44, 23 };

	bool find = false;

	int value;
	cin >> value;

	for( auto it = iv.begin(); it != iv.end(); it++ )
	{
		if( *it == value )
		{
			find = true;
			break;
		}
	}


	cout << ( find ? "Find value " : "NOT find value " ) << value << endl;


	return 0;
 }