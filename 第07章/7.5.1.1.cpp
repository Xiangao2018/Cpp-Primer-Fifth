#include <iostream>
#include <string>

using namespace std;

class Ref 
{
public:
    Ref(const string str) { // 构造函数体内初始化
        this->str = str;
    }

    Ref():str("HHHHH") { // 构造函数初始值列表方式
    }

    string get() const { return this->str; }

private:
    string str;
};

int main(int argc, char** argv)
{
    Ref ref;

    Ref ref1("123");


    cout << ref.get() << endl;
    cout << ref1.get() << endl;

    return 0;
}