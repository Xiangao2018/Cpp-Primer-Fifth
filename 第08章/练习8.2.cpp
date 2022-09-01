#include <iostream>
#include <string>

using namespace std;


std::istream &stringFromIstream(std::istream &in)
{
	auto oldState = in.rdstate();

	in.clear();
	in.ignore(1000, '\n');

	std::string str;
	while( in >> str ) 
		std::cout << str << endl;


	in.clear();
	in.setstate(oldState);

	return in;
}	


int main(int argc, char const *argv[])
{
	int age;
	cin >> age;

	cout << "Bad = " << ( cin.bad() ? "True" : "False" ) << endl; // 0x1;
    cout << "Eof = " << ( cin.eof() ? "True" : "False" ) << endl; // 0x2; // ctrl + D 文件结束
    cout << "fail = " << ( cin.fail() ? "True" : "False" ) << endl; // 0x4;
    cout << "Good = " << ( cin.good() ? "True" : "False" ) << endl; // 0x0;


	stringFromIstream(cin);


	cout << "Bad = " << ( cin.bad() ? "True" : "False" ) << endl; // 0x1;
    cout << "Eof = " << ( cin.eof() ? "True" : "False" ) << endl; // 0x2; // ctrl + D 文件结束
    cout << "fail = " << ( cin.fail() ? "True" : "False" ) << endl; // 0x4;
    cout << "Good = " << ( cin.good() ? "True" : "False" ) << endl; // 0x0;

    cin.clear();
    cin.ignore(1000, '\n');

	cin >> age;

	cout << "Bad = " << ( cin.bad() ? "True" : "False" ) << endl; // 0x1;
    cout << "Eof = " << ( cin.eof() ? "True" : "False" ) << endl; // 0x2; // ctrl + D 文件结束
    cout << "fail = " << ( cin.fail() ? "True" : "False" ) << endl; // 0x4;
    cout << "Good = " << ( cin.good() ? "True" : "False" ) << endl; // 0x0;

	return 0;

	return 0;
}