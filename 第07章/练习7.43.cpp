#include <iostream>
#include <string>

using namespace std;

class NoDefault {

public:
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
    C c;
}