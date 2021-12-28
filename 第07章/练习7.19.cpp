 #include <iostream>
#include <string>

using namespace std;

class Person {
public:
    Person() = default;
    Person(string name, string address): name(name), address(address) {}

    string getName() const { return name; }
    string getAddress() const { return address; }

private:
    string name;
    string address;
};