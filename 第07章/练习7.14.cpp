#include <iostream>
#include <string>

using namespace std;

struct Person {
    int age = 18;
    string name = "小明";

    Person() = default;
};

int main(int argc, char **argv)
{
    Person p;

    cout << p.name << " " << p.age << endl;

    return 0;
}
