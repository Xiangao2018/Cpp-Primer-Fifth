#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char** argv)
{
	vector<int> iv(1, 2, 3, 4, 5, 6, 7, 8, 9, 10);

	// 使用 auto& 可以进行写
	for( auto& i : iv )
	{
		i = i + 1;
	}


	
	return 0;
}