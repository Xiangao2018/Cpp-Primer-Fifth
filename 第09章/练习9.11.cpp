// 对 6 种创建和初始化 vector 对象的方法，每一种都给出一个实例，解释每一种 vector 包含什么值

#include <vector>
#include <iostream>

using namespace std;

void print(const vector<int>& iv)
{
	for(auto &i : iv)
	{
		cout << i << " ";
	}

	cout << endl;
}

int main(int argc, char* argv[])
{
	vector<int> iv1;
	print(iv1);

	vector<int> iv2{1, 2, 3, 4, 5, 6}; // 直接初始化
	print(iv2);

	vector<int> iv3(iv2);
	print(iv3);

	vector<int> iv4 = iv3;
	print(iv4);

	vector<int> iv5 = {2, 3, 4, 5, 6}; // 拷贝初始化
	print(iv5);

	vector<int> iv6(10, 0);
	print(iv6);

	vector<int> iv7(iv2.begin(), iv2.end()); // 迭代器
	print(iv7);

	return 0;
}
