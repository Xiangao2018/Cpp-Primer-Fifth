#include <iostream>

int main(int argc, char **argv) {

    {
        int i = -1;

        // non-const lvalue reference to type 'int' cannot bind to a temporary of type 'int'
        // int &r = 0; 
    }

    {
        int i2 = 0;
        int * const p2 = &i2; // p2 const point to int 
        *p2 = 100;
    }

    {
        const int i = -1;
        const int &r = 0;
    }

    {
        int i2 = 10;
        const int *const p3 = &i2; // p3 const point to int
    }

    {
        int i2 = 100;
        const int *p1 = &i2;
    }

    {
        int i2 = 1000;


        // 'const' qualifier may not be applied to a reference
        // const int &const r2 = i2;
    }
    
    {
        int i = -1;
        const int i2 = i, &r = i;
    }



    return 0;
}