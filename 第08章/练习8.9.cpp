#include <sstream>
#include <fstream>
#include <iostream>
#include <string>

using namespace std;

std::istream &stringFromIstream(std::istream &in)
{
	auto oldState = in.rdstate();

	in.clear();

	std::string str;
	while( in >> str ) 
		std::cout << str << endl;


	in.clear();
	in.setstate(oldState);

	return in;
}	


int main(int argc, char const *argv[])
{	
	ifstream from("file.txt");
	
	for( std::string line; std::getline(from, line); )
	{
		istringstream istring(line);
		stringFromIstream(istring);
	}

	return 0;
}