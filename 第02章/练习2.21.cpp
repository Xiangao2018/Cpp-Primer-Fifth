#include <iostream>

int main(int argc, char **argv) {
    int i = 0;

    /* double *dp = &i; */ // cannot initialize a variable of type 'double *' with an rvalue of type 'int *'

    /* int *ip = i; */ //cannot initialize a variable of type 'int *' with an lvalue of type 'int'

    int *p = &i; 

    return 0;
}