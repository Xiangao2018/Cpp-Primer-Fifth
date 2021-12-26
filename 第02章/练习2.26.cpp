#include <iostream>

int main(int argc, char **argv) {
    /* const int buf ; */ // 没有初始化

    int cnt = 0;

    const int sz = cnt; 

    ++cnt;

    /* ++sz; */ // 常量不允许修改值

    return 0;
}