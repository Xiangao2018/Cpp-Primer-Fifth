#include <iostream>
#include <vector>
#include <memory>

bool b() {
	int *p = new int; // 内存泄露，在堆区申请了空间，未 delete

	return p;
}

int main(int argc, char **argv)
{
	return 0;
}