#include <fstream>
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	ifstream from("file.txt");
	ofstream to("file.bak");

	std::string line;

	while( std::getline(from, line) )
	{
		to << line << endl;	
	}

	cout << "Bad = " << ( from.bad() ? "True" : "False" ) << endl; // 0x1;
    cout << "Eof = " << ( from.eof() ? "True" : "False" ) << endl; // 0x2; 
    cout << "fail = " << ( from.fail() ? "True" : "False" ) << endl; // 0x4;
    cout << "Good = " << ( from.good() ? "True" : "False" ) << endl; // 0x0;

	return 0;
}