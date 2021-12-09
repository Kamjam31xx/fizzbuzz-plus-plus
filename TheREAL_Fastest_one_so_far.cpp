/*copyright kameron briggs
i mean it github, stop tryna steal my code..
do whatever with it, unless you are github.
*/
#include <iostream>
#include <string>

int main() {
    std::cout << "0\n";

    unsigned long int k = 1;

    while (true) 
    {
        std::cout << std::to_string(k) + "\n";
        k++;
        std::cout << std::to_string(k) + "\n";
        k++;
        std::cout << " FIZZ\n";
        k++;
        std::cout << std::to_string(k) + "\n";
        k++;
        std::cout << " BUZZ\n";
        k++;
        std::cout << " FIZZ\n";
        k++;
        std::cout << std::to_string(k) + "\n";
        k++;
        std::cout << std::to_string(k) + "\n";
        k++;
        std::cout << " FIZZ\n";
        k++;
        std::cout << " BUZZ\n";
        k++;
        std::cout << std::to_string(k) + "\n";
        k++;
        std::cout << " FIZZ\n";
        k++;
        std::cout << std::to_string(k) + "\n";
        k++;
        std::cout << std::to_string(k) + "\n";
        k++;
        std::cout << " FIZZBUZZ\n";
        k++;
    }
}
