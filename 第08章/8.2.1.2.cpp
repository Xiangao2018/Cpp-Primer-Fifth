#include <fstream>
#include <iostream>

using namespace std;

// 1. 使用参数格式能够直接打开文件
// 2. 再次打开一个已经打开的流会报错

int main(int argc, char const *argv[])
{	
	ifstream from("file.txt");

	cout << from.is_open();

	cout << "Bad = " << ( from.bad() ? "True" : "False" ) << endl; // 0x1;
	cout << "Eof = " << ( from.eof() ? "True" : "False" ) << endl; // 0x2; 
	cout << "fail = " << ( from.fail() ? "True" : "False" ) << endl; // 0x4;
	cout << "Good = " << ( from.good() ? "True" : "False" ) << endl; // 0x0;

	// from.close();
	from.open("file.bak");
	cout << "Bad = " << ( from.bad() ? "True" : "False" ) << endl; // 0x1;
	cout << "Eof = " << ( from.eof() ? "True" : "False" ) << endl; // 0x2; 
	cout << "fail = " << ( from.fail() ? "True" : "False" ) << endl; // 0x4;
	cout << "Good = " << ( from.good() ? "True" : "False" ) << endl; // 0x0;

	return 0;
}