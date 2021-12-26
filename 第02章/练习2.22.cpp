#include <iostream>

int main(int argc, char **argv) {
    int i = 1;

    int *p = nullptr;    
    if( p ) {
        std::cout << "判断指针不为空" << std::endl;        
    } else {
        std::cout << "判断指针为空" << std::endl;        
    }

    p = &i;


    if( *p ) {
        std::cout << "判断指针所指向的值不为 0 " << std::endl;        
    }

    return 0;
}