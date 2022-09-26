#include <iostream>
#include <string>
#include <vector>
#include <memory>
#include <list>

using namespace std; 

int main(int argc, char **argv)
{
	shared_ptr<string> p1;

	if( p1 == NULL )
		cout << "p1 is null" << endl;

	cout << p1.use_count() << endl;

	p1 = shared_ptr<string>(new string("Hiya"));
	cout << p1.use_count() << " " << p1.unique() << endl;

	// string *v1 = p1.get();
	// cout << v1 << *v1 << endl;


	return 0;
}