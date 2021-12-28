#include <iostream>
#include <string>

using namespace std;

struct Person {
    string name;
    string address;

    Person(string name, string address): name(name), address(address) {}

    string getNane() const { return name; }// 常量成员函数
    string getName1() { return name; };
    string getAddress() const {  return address; };
};

int main(int argc, char **argv)
{
    Person p("小明", "苏州");

    cout <<  p.getNane() << " " << p.getAddress() << endl;

    return 0;
}


