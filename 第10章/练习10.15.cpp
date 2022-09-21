// 编写一个 lambda，捕获它所在函数的 int, 并接受一个 int 参数, lambda 应该返回捕获的 int 和 int 参数的和

// 编写一个 lambda, 接受两个参数，返回他们的和

#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{

	int a = 10;

	auto f = [a](const int i1) {
		return i1 + a;
	};

	cout << f(10) << endl;


	return 0;
}