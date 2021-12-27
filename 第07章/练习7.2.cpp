#include <iostream> 
#include <string>

using namespace std;

struct Sales_data {
    string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0f;

    string isbn() const;
    Sales_data &combine(const Sales_data &data);
};

std::string Sales_data::isbn() const { 
    return this->bookNo;
}

Sales_data &Sales_data::combine(const Sales_data &data) {
    this->units_sold += data.units_sold;
    this->revenue += data.revenue;
    return *this;
}

std::istream &read(std::istream &in, Sales_data &data)
{
    in >> data.bookNo >> data.units_sold >> data.revenue;

    return cin;
}

std::ostream &print(std::ostream &out, const Sales_data &data)
{
    out << data.bookNo << " " << data.units_sold << " " << data.revenue;

    return out;
}


Sales_data add(const Sales_data &data1, const Sales_data &data2)
{
    Sales_data sum = data1;
    sum.units_sold += data2.units_sold;
    sum.revenue += data2.revenue;

    return sum;
}

int main(int argc, char **argv)
{
    Sales_data total;

    if( read(cin, total) )
    {
        Sales_data trans;
        while( read(cin, trans) ) {
            if( total.isbn() == trans.isbn() ) {
                total.combine(trans);
            } else {
                print(cout, total) << endl;
                total = trans;
            }               
        }
        print(cout, total);
    } else {
        cerr << "No data?!" << endl;
    }
}