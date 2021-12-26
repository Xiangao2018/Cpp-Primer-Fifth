#include <iostream>

int i = 42;
int main(int argc, char **argv) {
    int i = 100;
    int j = i; // 100

    std::cout << j << std::endl;
}