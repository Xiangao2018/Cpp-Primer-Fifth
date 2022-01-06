#include <iostream>
#include <string>

using namespace std;

class ConstRef
{
public: 
    ConstRef(int ii): i(ii), ci(ii), ri(ii) {}

    // error: constructor for 'ConstRef' must explicitly initialize the const member 'ci'
    // error: constructor for 'ConstRef' must explicitly initialize the reference member 'ri'
    // ConstRef(int ii) {
    //     i = ii;
    //     // ci = ii;
    //     ri = ii;
    // }

private:
    int i;
    const int ci;
    int &ri;
};

int main(int argc, char **argv)
{

}