// 编写一个 lambda, 接受两个参数，返回他们的和

#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	auto f = [](const int i1, const int i2) {
		return i1 + i2;
	};

	cout << f(10, 20) << endl;


	return 0;
}