# Const 限定符

1. Const 必须初始化，且不能更改它的对象值
2. Const 默认情况下仅对文件内有效，如果需要多文件共享，需要在 const 变量**声明**以及**定义**都添加**extern**关键字;

**初始化对 const 的引用**
一般引用的类型需要与引用的对象一直，但是如果在初始化常量引用时允许任意表达式作为初始值，只要表达式结果值能转换成引用类型值即可。在系统转换过程中生成了一个临时变量


```cpp

int a = 10;
int &r1 = &a; // 引用与引用对象类型一致

std::cout << &a << " "<< &r1 << std::endl; // 地址一致

double d = 3.14;
const int &rd = d; // &rd 类型与 d 的类型不一致

std::cout << &d << " "<< &rd << std::endl; // 地址不一致

```

**const 与指针**
从右往左读即可

```cpp
const int p; // 常量
const int* p; // p is point to int const 
int const* p; // p point to consst int
int * const p; // p const point to int  
const int * const p; // p const point to int const 
int const * const p; // p const point ro const int
```


## const 限定符与 constexpr

const 限定符修饰的，有的在运行时才能确定，有的可以再编译时确定， 例如

const int size = getSize();// 运行时确定
const int a = 100; // 编译时确定

constexpr 修饰的变量一定是常量表达式, 常量表达式在编译时就确定
constexpr int mf = 20; 
