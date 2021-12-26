#include <iostream>

int main(int argc, char **argv) {
    int i = 42;
    void *p = &i;

    /* long *lp = &i;  */ // cannot initialize a variable of type 'long *' with an rvalue of type 'int *'

    return 0;
}