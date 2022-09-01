#include <fstream>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
	std::vector<string> v;

	ifstream from("file.txt");
	
	for( std::string line; std::getline(from, line); )
	{
		v.push_back( line );		
	}


	for( std::string line : v )
	{
		cout << line << endl;	
	}

	return 0;
}