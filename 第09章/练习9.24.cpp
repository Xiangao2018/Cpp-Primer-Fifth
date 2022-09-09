#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(int argc, char** argv)
{
    vector<string> v1;

 	// cout << v1[0] << endl;    // [1]    70569 segmentation fault

 	// cout << v1.at(0);         // libc++abi: terminating with uncaught exception of type std::out_of_range: vector [1]    70634 abort

 	// cout << v1.front();       // [1]    70697 segmentation fault

 	// cout << *( v1.begin() );  // [1]    70792 segmentation fault


	return 0;
}