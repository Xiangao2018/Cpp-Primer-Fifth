#include <iostream>

int main(int argc, char **argv) {
    int ival = 1.01; // waring not error

    /* int &rval1 = 1.01; */ //引用本质就是一个别名

    int &rval2 = ival;

    /* int &rval3; */ // 引用必须初始化
}