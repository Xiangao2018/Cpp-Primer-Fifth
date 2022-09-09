#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(int argc, char** argv)
{
	vector<string> v1;
    auto iter = v1.begin();

    string word;
    while( cin >> word )
	{
		iter = v1.insert(iter, word); // insert 是在 iter 之前插入对应的值，返回值是插入只的迭代器
    }

    for(const auto& value : v1)
    {
    	cout << value << " ";
    }

    cout << endl;

	return 0;
}