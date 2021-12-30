#include <iostream>
#include <string>
#include <vector>

using namespace std;


class Screen 
{
public:
    typedef std::string::size_type pos;

    Screen() = default;
    Screen(pos ht, pos wd, char c): height(ht), width(wd), contents(ht * wd, c) {};

    Screen &set(char);
    Screen &set(pos, pos, char);

    char get() const { return contents[cursor]; };
    inline char get(pos ht, pos wd) const;
    Screen &move(pos r, pos c);

    pos size() const;

private:
    pos cursor = 0;
    pos height = 0, width = 0;
    std::string contents;
};


inline Screen &Screen::set(char c)
{
    contents[cursor] = c;

    return *this;
}

inline Screen &Screen::set(pos ht, pos wd, char c)
{
    contents[ht * width + wd ] = c;

    return *this;
}

inline char Screen::get(pos ht, pos wd) const
{
    pos row = ht * width;
    return contents[row + wd];
}

// move 声明为 inline
inline Screen &Screen::move(pos r, pos c)
{
    pos row = r * width;
    cursor = row + c;

    return *this;
}

Screen::pos Screen::size() const { return height * width; }

int main(int argc, char **argv)
{

}