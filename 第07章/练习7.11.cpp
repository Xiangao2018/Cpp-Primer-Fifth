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


int main(int argc, char **argv)
{
    Sales_data data1;
    cout << data1.isbn() << " " << data1.units_sold << " " << data1.revenue << " " << endl;

    Sales_data data2("Book1");
    cout << data2.isbn() << " " << data2.units_sold << " " << data2.revenue << " " << endl;
    
    Sales_data data3("Book2", 10, 20);
    cout << data3.isbn() << " " << data3.units_sold << " " << data3.revenue << " " << endl;

    return 0;
}