#include <iostream>

int main(int argc, char **argv)
{

    const int ic = 100;
    int i = ic; 

    const int *const p3 = &ic;
    // a value of type "const int *" cannot be used to initialize an entity of type "int *"
    // int *p1 = p3; // 类型不一致

    // int *p1 = &ic; // 类型不一致

    // 略

}