
#include <iostream>
#include <string>

int main(){
    std::string fizz = "fizz";
    std::string buzz = "buzz";
    
    for(int number = 0; ; number++)
    {
        std::string output = "";
        bool isNumber = true;
        
        if((number % 3) == 0)
        {
            output = "fizz";
            isNumber = false;
            
        }
        if((number % 5) == 0)
        {
            output = output + "buzz";
            isNumber = false;
        }
        if(isNumber)
        {
            output = std::to_string(number);
        }
        std::cout << output << "\n";
    }
}
