#include <iostream>

using namespace std;

int main(int argc, char **argv) {
    int zero = 0;
    int *p = &zero;

    cout << p << " " << *p << endl;

    // error
    // p = 0;    
    // cout << p << " " << *p << endl;    
    // int *p1 = 0;
    // cout << p1 << " " << *p1 << endl;

    // incompatible integer to pointer conversion assigning to 'int *' from 'int'
    //     
    int *p2 = NULL;    
    // p2 = 0x11111111;
    cout << p2 << " "  << endl;

    return 0;
}