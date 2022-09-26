#include <iostream>
#include <vector>
#include <memory>

int main(int argc, char **argv)
{
	int *q = new int(42);
	int *r = new int(100);

	// 原来的内存区域未释放
	// delete r; r = nullptr;
	r = q; // 原来的内存区域未释放

	auto q2 = make_shared<int>(42);
	auto r2 = make_shared<int>(100);
	r2 = q2;

	return 0;
}