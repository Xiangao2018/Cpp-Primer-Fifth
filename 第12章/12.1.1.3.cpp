#include <iostream>
#include <string>
#include <vector>
#include <memory>
#include <list>

using namespace std; 

int main(int argc, char **argv)
{
	shared_ptr<string> p1 = make_shared<string>("abcdef");

	auto  p2 = make_shared<int>(123);

	cout << p1 << " " << *p1 << endl;
	cout << p2 << " " << *p2 << endl;

	// 1 
	cout << "p2.use_count = " << p2.use_count() << endl;
	{
		auto p3 = p2;

		// 2 
		cout << "p2.use_count = " << p2.use_count() << endl;
		// 2
		cout << "p3.use_count = " << p3.use_count() << endl;
	}
	
	// 1
	cout << "p2.use_count = " << p2.use_count() << endl;

	return 0;
}