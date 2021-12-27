#include <iostream>
#include <string>

using namespace std;

struct Person {
    string name;
    string address;

    string getNane() const; // 常量成员函数
    string getName1();
    string getAddress() const;
};

string Person::getNane() const {
    return this->name;
}

string Person::getAddress() const {
    return this->address;
}

int main(int argc, char **argv)
{
    const Person p1;

    p1.getNane();
    // p1.getName1(); // 'this' argument to member function 'getName1' has type 'const Person', but function is not marked const

    return 0;
}
