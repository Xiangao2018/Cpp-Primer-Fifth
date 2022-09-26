#include <iostream>
#include <vector>

using namespace std;

vector<int> *storage() {
	return new vector<int>();
}

void in(vector<int> * storage)
{
	int value;
	while( cin >> value )
		storage->push_back(value);
}

void out(vector<int> *storage)
{
	for( int i = 0; i < storage->size(); i++)
	{
		cout << (*storage)[i] << " ";
	}
}

int main(int argc, char **argv)
{
	vector<int> *values = storage();
	in( values );
	out(values);

	delete values;

	return 0;
}