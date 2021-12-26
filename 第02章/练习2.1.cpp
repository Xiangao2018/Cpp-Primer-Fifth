#include<iostream>


// int short long / long long 表示的大小范围不一样
// float double 的范围与精度不一样
// 有符号可以表示负值，无符号无法表示负
int main(int argc, char **argv) {
    std::cout << "int 长度为: " << sizeof(int) << std::endl;
    std::cout << "short 长度为: " << sizeof(short) << std::endl;
    std::cout << "long 长度为: " << sizeof(long) << std::endl;
    std::cout << "long long 长度为: " << sizeof(long long) << std::endl;
    std::cout << "float 长度为: " << sizeof(float) << std::endl;
    std::cout << "double 长度为: " << sizeof(double) << std::endl;

    return 0;
}