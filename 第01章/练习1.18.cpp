#include <iostream>

int main(int argc, char **argv)
{
    int currVal = 0, val = 0;

    if( std::cin >> currVal ) {
        int cnt = 1;

        while(std::cin >> val) {
            if( val == currVal ) {
                cnt += 1;
            } else {
                std::cout << currVal << " occurs " << cnt << " times " << std::endl;
                currVal = val;
                cnt = 1;
            }        
        }

        std::cout << currVal << " occurs " << cnt << " times " << std::endl;
    }
}