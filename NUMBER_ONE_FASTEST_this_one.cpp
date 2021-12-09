#include <iostream>
#include <cstdio>
#include <string>

// I would use std::to_chars()
// but.....
// I guess i dont have it :/ 
// lame

int main() {
    std::cout << "0\n";

    unsigned long int k = 1;

    while (true) 
    {
        printf( (std::to_string(k) + "\n").c_str() );
        k++;
        printf( (std::to_string(k) + "\n").c_str() );
        k++;
        printf( " FIZZ\n" );
        k++;
        printf( (std::to_string(k) + "\n").c_str() );
        k++;
        printf( " BUZZ\n" );
        k++;
        printf( " FIZZ\n" );
        k++;
        printf( (std::to_string(k) + "\n").c_str() );
        k++;
        printf( (std::to_string(k) + "\n").c_str() );
        k++;
        printf( " FIZZ\n" );
        k++;
        printf( " BUZZ\n" );
        k++;
        printf( (std::to_string(k) + "\n").c_str() );
        k++;
        printf( " FIZZ\n" );
        k++;
        printf( (std::to_string(k) + "\n").c_str() );
        k++;
        printf( (std::to_string(k) + "\n").c_str() );
        k++;
        printf( " FIZZBUZZ\n" );
        k++;
    }
}
