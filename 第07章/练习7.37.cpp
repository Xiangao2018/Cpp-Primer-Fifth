#include <iostream>
#include <string>

using namespace std;

struct Sales_data {
    Sales_data() = default;
    Sales_data(const std::string &s): bookNo(s) {};
    Sales_data(const std::string &s, unsigned n, double p): bookNo(s), units_sold(n), revenue(p) {};
    Sales_data(std::istream &s);

    std::string isbn() const { return bookNo; };
    Sales_data &combine(const Sales_data &data);
    double avg_price() const;

    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0f;
};

Sales_data::Sales_data(std::istream &s) {
    
    s >> bookNo >> units_sold >> revenue;
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

Sales_data firstItem(cin);

int main(int argc, char **argv)
{
    Sales_data next;

    Sales_data last("9-999-99999-9");
}