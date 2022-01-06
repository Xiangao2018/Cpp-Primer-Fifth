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


int main(int argc, char **argv)
{
    vector<NoDefault> vec(10);
}