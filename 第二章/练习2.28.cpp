#include <iostream>

int main(int argc, char **argv) 
{
    { // a
        int i;  // 整形变量
        int *const cp = nullptr; // point cp const point to int  常量指针
    }  
    
    { // b 
        int * p1 = nullptr; // point p1  point to int
        int *const p2 = nullptr; // point p2 const point to int
    }

    { // c 

        /* const int ic ;  */  // 整形常量需要初始化

        const int ic = 100;
        const int &r = ic;
    }

    { // d

        /* const int *const p3; */  // point const point to int const // 需要初始化
        
        int i = 100;
        const int *const p3 = &i;
        std::cout << "p3 " << p3 << " " << *p3 << std::endl;
    }

    { //e 
        const int *p = NULL; // point p point to int const

        // std::cout << "d " << p << " " << std::endl;
    }
}