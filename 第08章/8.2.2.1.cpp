#include <fstream>
#include <iostream>

using namespace std;


// mode 有隐含的条件
// out 隐含截断，除非强制设置为 app.
int main(int argc, char const *argv[])
{

	ofstream out("file.bak"); // 输出模式，并截断
	ofstream out2("file.bak", ofstream::out); // 输出模式并截断
	ofstream out3("file.bak", ofstream::out | ofstream::trunc); // 输出模式并截断

	ofstream app("file.bak", ofstream::app); // 相当于 ofstream::out | ofstream::app， 追加 不会截断
	ofstream app2("file.bak",ofstream::out | ofstream::app);  // 同上
 

	return 0;
}