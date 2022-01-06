#include <iostream>
#include <string>

using namespace std;

int height;

class Screen 
{
    typedef std::string::size_type pos;
public:
    void dummy_fcn(pos height) {
        cursor = width * height;
    }

private:
    pos cursor;
    pos height = 0;
    pos width = 0;

// typedef std::string::size_type pos; // error: unknown type name 'pos';
};
