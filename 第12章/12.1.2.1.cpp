#include <iostream>
#include <string>

using namespace std;


// 全局变量变量会进行 NULL 初始化 
string *ps1;
int main(int argc, char** argv)
{
	int *pi = new int;
	*pi = 400;

	if( pi )
		cout << *pi << endl;
	else
		cout << "pi == null" << endl;

	// 局部变量不一定会进行 NULL 初始化
	string *ps;
	if( !ps )
		cout << "ps is null" << endl;
	cout << *ps << endl;

	if( !ps1 )
		cout << "ps1 is null" << endl;

	return 0;
}