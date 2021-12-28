#include <iostream>
#include <string>

using namespace std;

class Sales_data
{

friend Sales_data add(const Sales_data&, const Sales_data&);
friend std::istream &read(std::istream &in, Sales_data &data);
friend std::ostream &print(std::ostream &out, const Sales_data &data);

public:
    Sales_data() = default;
    Sales_data(const std::string &s, unsigned n, double p): bookNo(s), units_sold(n), revenue(p * n) {}
    Sales_data(const std::string &s): bookNo(s) {}
    Sales_data(istream &in);

    std::string isbn() const { return bookNo; }
    Sales_data &combine(const Sales_data &data);

private:
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0f;
};

Sales_data::Sales_data(istream &in)
{
    in >> bookNo >> units_sold >> revenue;
}

Sales_data &Sales_data::combine(const Sales_data &data)
{
    if( this->bookNo == data.bookNo )
    {
        this->units_sold += data.units_sold;
        this->revenue += data.revenue;
    }
    return *this;
}

Sales_data add(const Sales_data &data1, const Sales_data &data2)
{
    Sales_data sum = data1;

    if( sum.bookNo == data2.bookNo )
    {
        sum.units_sold += data2.units_sold;
        sum.revenue += data2.revenue;
    }

    return sum;
}

std::istream &read(std::istream &in, Sales_data &data)
{
    in >> data.bookNo >> data.units_sold >> data.revenue;

    return in;
}

std::ostream &print(std::ostream &out, const Sales_data &data)
{
    out << data.bookNo << " " << data.units_sold << " " << data.revenue << endl;

    return out;
}

int main(int argc, char **argv)
{
}