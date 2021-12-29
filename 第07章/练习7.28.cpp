#include <iostream>
#include <string>

using namespace std;

class Screen
{
public:
    typedef std::string::size_type Pos;
    // using Pos = std::string::size_type;

public:
    Screen() = default;
    Screen(Pos height, Pos width, char c): height(height), width(width), contents(height * width, c) {}

    char get() const;
    char get(Pos r, Pos col) const;

    // 如果返回的是 Screen， 将是一个副本
    Screen &move(Pos r, Pos c);
    Screen &set(char c);
    Screen &set(Pos r, Pos col, char c);
    Screen &display(std::ostream &os);
    const Screen &display(std::ostream &os) const;

private:
    void do_display(std::ostream &os) const;

private:
    Pos cursor = 0;
    Pos height = 0;
    Pos width = 0;
    string contents;

};

inline char Screen::get() const
{
    return contents[cursor];
}

inline char Screen::get(Pos r, Pos col) const
{
    return contents[r * width + col];
}

Screen &Screen::move(Pos r, Pos c)
{
    cursor = r * width + c;

    return *this;
}

Screen &Screen::set(char c)
{
    contents[cursor] = c;

    return *this;
}

Screen &Screen::set(Pos r, Pos col, char c)
{
    contents[r * width + col] = c;

    return *this;
}

Screen &Screen::display(std::ostream & os)
{
    do_display(os);

    return *this;
}

const Screen &Screen::display(std::ostream & os) const
{
    do_display(os);

    return *this;
}

void Screen::do_display(std::ostream &os) const
{
    os << contents;
}


int main(int argc, char **argv)
{
    Screen screen(5, 5, '0');

    screen.move(2, 2).set('#').display(cout);

    return 0;
}