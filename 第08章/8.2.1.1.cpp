#include <fstream>
#include <iostream>

using namespace std;

// ifstream 与 istream 一样，当 >> 操作的时候，还是按照 istrem 一样的顺序进去分割字符串

int main(int argc, char const *argv[])
{	
	ifstream from("file.txt");

	std::string word; 

	while( from >> word )
	{
		cout << word << endl;	
	}
	return 0;
}