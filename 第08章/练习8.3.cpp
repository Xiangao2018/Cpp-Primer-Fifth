#include <iostream>
#include <string>

using namespace std;


std::istream &stringFromIstream(std::istream &in)
{
	auto oldState = in.rdstate();

	in.clear();
	in.ignore(1000, '\n');

	// 类型不对或者 ctrl+d 结束
	int i;
	while( in >> i ) 
		std::cout << i << endl;


	in.clear();
	in.setstate(oldState);

	return in;
}	


int main(int argc, char const *argv[])
{
	stringFromIstream(cin);

	return 0;
}