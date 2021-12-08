#include <iostream>

int main(int argc, char **argv) {
    int i = 42;
    int *p1 = &i; // *p = 42 
    *p1 = *p1 * *p1; // *p = 42 * 42
    std::cout << *p1 << std::endl;
    return 0;
}