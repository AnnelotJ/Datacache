#include <iostream>
#include <string.h>

struct Word{
    std::string characters; 
};



int main(){

    std::string inputString;
    
    // RETRIEVE & STORE
    std::cout<<"The following instructions are possible:\nSTORE \nRETRIEVE\n";
    std::getline(std::cin,inputString);

    std::cout<< inputString;

    if (inputString.contains("STORE")){


    }
    else if (inputString.contains("RETRIEVE")){

    }
    else{
        std::cout<<"Option not possible terminating program"; 
        exit(0);
    }


    return 0;
}