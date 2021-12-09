#include <iostream>
int main(){
    std::string str [15] = {"\n","\n"," FIZZ\n","\n"," BUZZ\n"," FIZZ\n","\n","\n"," FIZZ\n"," BUZZ\n","\n"," FIZZ\n","\n","\n"," FIZZBUZZ\n"};
    std::cout << "0\n";
    unsigned long int i = 0;
    unsigned long int j = 0;
    while(true){
        unsigned long int k = 15 * i + 1;
        for( ; j < 15 ; j++ ){
            std::cout << k + j << str[j];
        }
        j = 0;
        i++;
    }
}
