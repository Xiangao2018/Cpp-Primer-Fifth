#include <iostream>

using namespace std;

int text_size() {
    return 10;
}

int main(int argc, char **argv)
{
    unsigned buf_size = 1024; 

    
    { // a
        // Mac上编译不出错，但是应该有问题的
        int ia[buf_size]; 
        cout << ia[0] << endl;       
    }

    { // b
        int ia[ 4 * 7 - 14];
    }

    { //c 
        // Mac上编译不出错，但是应该有问题的
        int ia[text_size()];
        cout << ia[0] << endl;
    }
    
    { //d 
        // error: initializer-string for char array is too long
        // char s[11] = "fundamental";
        // cout << s << endl;
    }   

    

    return 0;
}

