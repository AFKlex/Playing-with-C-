#include<iostream>

int main(int argc, char const *argv[])
{
    int value = 0, sum = 0;
    std::cout << "Please provide multiple Numbers seperated by a Space: " << std::endl;
    while(std::cin >> value){
        std::cout << value << std::endl;
        sum += value; 
        // I need to end the loop with control D 

    }
    std::cout << "Sum is: " << sum << std::endl; 
    return 0;
}
