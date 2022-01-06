#include <iostream>

using namespace std;

struct X {

    // X(int i, int j): base(i), rem(base % j) {
    X(int i, int j): base(i), rem(i % j) {

    }

    int rem, base;
};

int main(int argc, char **argv) {
    X x(10, 2);

    cout << x.rem << x.base << endl;

    return 0;
}