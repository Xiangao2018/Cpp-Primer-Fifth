#include <iostream>
#include <vector>

using namespace std;

class NoDefault {

public:
    NoDefault(): NoDefault(0) { }
    
    NoDefault(int i): i(i) {}

private:
    int i;
};

class C {

public:
    C(): noDefault(0) {

    }

private:
    NoDefault noDefault;
};


int main(int argc, char **argv)
{
    vector<C> vec(10);
}