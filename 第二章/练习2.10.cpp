#include <iostream>
#include <string>

std::string global_val; // 全局变量 函数之外初始化为空字符串
int global_int; // 全局变量 默认为 0

int main(int argc, char **argv) {
    std::string local_val; // 是否初始化依赖于系统
    int local_int; // 是否初始化依赖于系统

    std::cout << "global_val: " << global_val << std::endl;
    std::cout << "global_int: " << global_int << std::endl;
    std::cout << "local_val: " << local_val << std::endl;
    std::cout << "local_int: " << local_int << std::endl;
}