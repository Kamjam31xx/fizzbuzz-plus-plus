#include <iostream>
#include <string>

int main(){
    std::cout << "0\n";
    unsigned long int i = 0;
    unsigned long int j = 0;
    while(true){
        unsigned long int k = 15 * i + 1;
        std::cout << k << "\n";
        std::cout << k + 1 << "\n";
        std::cout << " FIZZ\n";
        std::cout << k + 3 << "\n";
        std::cout << " BUZZ\n";
        std::cout << " FIZZ\n";
        std::cout << k + 6 << "\n";
        std::cout << k + 7 << "\n";
        std::cout << " FIZZ\n";
        std::cout << " BUZZ\n";
        std::cout << k + 8 << "\n";
        std::cout << " FIZZ\n";
        std::cout << k + 9 << "\n";
        std::cout << k + 10 << "\n";
        std::cout << " FIZZBUZZ\n";
        j = 0;
        i++;
    }
}
