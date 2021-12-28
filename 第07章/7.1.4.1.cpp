#include <iostream>
#include <string>

using namespace std;

// Build Error 

struct Student
{
    string name;
    int age;
    Student(string name): name(name) {
        age = 100;
    }
};

struct Teacher 
{
    string name;
    Student studnt;    // implicit default constructor for 'Teacher' must explicitly initialize the member 'studnt' which does not have a default constructor
};


int main(int argc, char **argv)
{
    Teacher teacher;

    cout << teacher.name << endl;
    cout << teacher.studnt.name << endl;
    cout << teacher.studnt.age << endl;

    return 0;
}