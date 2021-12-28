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

int main(int argc, char **argv)
{

}