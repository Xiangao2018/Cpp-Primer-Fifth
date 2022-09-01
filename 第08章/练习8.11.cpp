#include <sstream>
#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

struct PersonInfo
{
	std::string name;
	std::vector<std::string> phones;
};

std::ostream &print(std::ostream &out, const PersonInfo &info)
{
	out << "name is: "  << info.name;
	out << ", phones are: ";

	for( string phone : info.phones )
	{
		out << phone << " ";
	}

	out << endl;

	return out;
}

void test() 
{
	string line, word;

	std::vector<PersonInfo> people;

	while( std::getline(cin, line) )
	{
		PersonInfo info;
		istringstream record(line);

		record >> info.name;

		while( record >> word )
		{
			info.phones.push_back( word );
		}

		people.push_back(info);
	}


	for( PersonInfo info : people )
	{
		print(cout, info);
	}
}

void test2() 
{
	string line, word;

	std::vector<PersonInfo> people;

	// 外层定义不能绑定对象
	istringstream record;

	while( std::getline(cin, line) )
	{
		PersonInfo info;		

		record.clear();// 清除所有的异常状态

		// 绑定对象
		record.str(line);

		record >> info.name;

		while( record >> word )
		{
			info.phones.push_back( word );
		}

		people.push_back(info);

	}

	for( PersonInfo info : people )
	{
		print(cout, info);
	}
}


int main(int argc, char const *argv[])
{
	
	// test();
	test2();



	return 0;
}