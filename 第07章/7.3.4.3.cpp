#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Y;
class X 
{
    friend class Y;
public:
    X() {
        // y = Y(); // 仅仅做了前置声明，但是未真正的声明，不可以使用
    }

private:
    Y y;
};

class Y 
{
public:
    Y() = default;
};


int main(int argc, char **argv)
{

}
