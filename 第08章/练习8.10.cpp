#include <fstream>
#include <sstream>
#include <iostream>
#include <vector>
#include <string>

using namespace std;


int main(int argc, char const *argv[])
{
	ifstream from("file.txt");
	std::vector<string> v;

	for( std::string line; std::getline(from, line); )
	{
		v.push_back(line);
	}

	
	for( std::string line : v )
	{
		istringstream in(line);

		for( std::string word; in >> word; )
		{
			cout << word << " ";
		}

		cout << endl;
	}

	return 0;
}