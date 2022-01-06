#include <iostream>
#include <string>

using namespace std;

struct Sales_data {
    Sales_data() = default;
    Sales_data(std::istream &s);

    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0f;
};

Sales_data::Sales_data(std::istream &s) {
    
    s >> bookNo >> units_sold >> revenue;
}

int main(int argc, char **argv)
{
    Sales_data firstItem(cin);
}