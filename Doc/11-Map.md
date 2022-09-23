# 第 11 章 关联容器


## map

1. 访问 map 可以直接用对应的 key， 返回值是内部值得引用
2. 访问 map 里面的值，如果没有，就会创建一个默认的

```cpp
map<string, size_t> word_count;

string word;

while( cin >> word )
	++word_count[word]; // 返回引用，没有就会创建一个默认的

```


## set

set 没有 push_back 以及 push_Front，可以用 insert
