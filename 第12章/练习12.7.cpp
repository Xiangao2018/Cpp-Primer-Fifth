#include <iostream>
#include <vector>
#include <memory>

using namespace std;

shared_ptr<vector<int> > storage() {
	return make_shared<vector<int> >();
}

void in(const shared_ptr<vector<int> > & storage)
{
	int value;
	while ( cin >> value )
		storage->push_back(value);
}

void out(const shared_ptr<vector<int> > & storage)
{
	for( int i = 0; i < storage->size(); i++)
	{
		cout << (*storage)[i] << " ";
	}
}

int main(int argc, char **argv)
{

	auto values = storage();
	in( values );
	out(values);

	return 0;
}