#include <iostream>
#include <string>
#include <memory>
#include <vector>
#include <initializer_list>

using namespace std;

class StrBlob {
public:
	typedef std::vector<std::string>::size_type size_type;

	StrBlob(): data(make_shared<vector<std::string>>()) {};
	StrBlob(std::initializer_list< std::string> il): data(make_shared<vector<std::string>>(il)) {};

	void push_back(const std::string &t) { data->push_back( t ); };

	std::string &front() {  return data->front(); }
	std::string &back() { return data->back(); }

	const std::string &front() const { return const_cast<std::string &>( data->front() ); }
	const std::string &back() const { return const_cast<std::string &>( data->back() ); }

	int count() const { return data->size(); }
 
private:
	std::shared_ptr<std::vector<std::string> > data;
};

int main(int argc, char* argv[])
{
	StrBlob b1 = {"a"};
	
	std::string &front = b1.front();
	front = "bbbb";

	cout << b1.front() << endl; // bbbb

	const std::string &back = b1.back();

	return 0;
}