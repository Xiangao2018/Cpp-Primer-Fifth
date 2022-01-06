#include <iostream>
#include <string>

using namespace std;

typedef string Type;
Type initVal();

class Exercise 
{
public:
    typedef double Type;
    Type setVal(Type);
    Type initVal(Type);

private:
    int val;
};

// Type 类型不明确，容易造成理解错误
Exercise::Type Exercise::setVal(Exercise::Type parm) {
    val = parm + initVal(0);

    return val;
}