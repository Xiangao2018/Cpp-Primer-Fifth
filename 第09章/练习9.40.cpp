#include <iostream>
#include <vector>
#include <string>

using namespace std;

// 如果下列程序读取了 256 个单词，在 resize 之后容器的 capacity 可能是多少，如果读入了 512 个， 1000个或者 1048 个 呢

int main(int argc, char** argv)
{
	vector<string> svec;
	svec.reserve(1024); // capacity = 1024;

	cout  << "count = " << svec.size() << ", capacity = " << svec.capacity() << endl;

	for( int i = 0; i < 1048; i++ )
	{
		svec.push_back( std::to_string(i) );
	}

	svec.resize(svec.size() + svec.size() / 2); // 没啥影响

	// 512: count = 768, capacity = 1024
	// 1000: count = 1500, capacity = 2048
	// 1048: count = 1572, capacity = 2048
	cout  << "count = " << svec.size() << ", capacity = " << svec.capacity() << endl;

	return 0;
}