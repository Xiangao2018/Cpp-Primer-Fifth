#include <iostream>
#include <string>

using namespace std;

struct Person {
    string name;
    string address;

    string getNane() const;
    string getAddress() const;
};

string Person::getNane() const {
    return this->name;
}

string Person::getAddress() const {
    return this->address;
}

istream &read(istream &in, Person &p) {
    in >> p.name >> p.address;

    return in;
}

ostream &print(ostream &out, const Person &p) {
    out << p.name << " " << p.address;

    return out;
}

int main(int argc, char **argv)
{
    const Person p1;

    p1.getNane();
    // p1.getName1(); // 'this' argument to member function 'getName1' has type 'const Person', but function is not marked const

    return 0;
}
