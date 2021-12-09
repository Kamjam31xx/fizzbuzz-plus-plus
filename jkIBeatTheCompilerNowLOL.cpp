/* copyright kameron briggs 
mine or something like that, stop trying to claim my stuff github
*/ 
#include <iostream>
#include <string>

int main() {
    std::cout << "0\n";

    unsigned long int k = 1;

    while (true) {
        std::cout << std::to_string(k) << "\n";
        k++;
        std::cout << std::to_string(k) << "\n";
        k++;
        std::cout << " FIZZ\n";
        k++;
        std::cout << std::to_string(k) << "\n";
        k++;
        std::cout << " BUZZ\n";
        k++;
        std::cout << " FIZZ\n";
        k++;
        std::cout << std::to_string(k) << "\n";
        k++;
        std::cout << std::to_string(k) << "\n";
        k++;
        std::cout << " FIZZ\n";
        k++;
        std::cout << " BUZZ\n";
        k++;
        std::cout << std::to_string(k) << "\n";
        k++;
        std::cout << " FIZZ\n";
        k++;
        std::cout << std::to_string(k) << "\n";
        k++;
        std::cout << std::to_string(k) << "\n";
        k++;
        std::cout << " FIZZBUZZ\n";
        k++;
    }
}
