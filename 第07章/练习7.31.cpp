#include <iostream>

using namespace std;

class Y;

class X
{
public:
    X() = default;
    ~X() {
        cout << "X deinit" << endl;
    }

    Y *y;
};

class Y
{
public:
    Y() = default;
    ~Y() {
        cout << "Y deinit" << endl;
    }

    X x;
};


int main(int argc, char **argv)
{
    X x;
    Y y;

    x.y = &y;
    y.x = x;
}
