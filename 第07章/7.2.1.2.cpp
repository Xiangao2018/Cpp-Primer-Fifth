#include <iostream>
#include <string>

using namespace std;

class Person 
{
    friend Person operator+(const Person &p1, const Person &p2);
    friend ostream &operator<<(ostream &out, const Person &p);

public:
    Person(int age, string name): age(age), name(name) { }


private:
    int age;
    string name;
};

Person operator+(const Person &p1, const Person &p2)
{
    int age = p1.age + p2.age;

    string name = p1.name + " " + p2.name;

    Person p(age, name);

    return p;
}

ostream &operator<<(ostream &out, const Person &p)
{
    cout << p.age << " " << p.name;

    return out;
}

int main(int argc, char **argv)
{  
    Person p1(10, "Hello");
    Person p2(20, "world");

    Person p3 = p1 + p2;

    cout << p1 << endl;
    cout << p2 << endl;
    cout << p3 << endl;

    return 0;
}

