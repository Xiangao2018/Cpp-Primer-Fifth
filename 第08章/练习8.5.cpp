#include <fstream>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
	std::vector<string> v;

	ifstream from("file.txt");
	
	for( std::string word; from >> word; )
	{
		v.push_back( word );		
	}


	for( std::string word : v )
	{
		cout << word << endl;	
	}

	return 0;
}