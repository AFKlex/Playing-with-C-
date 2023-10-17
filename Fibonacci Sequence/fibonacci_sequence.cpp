#include<iostream>

void print_long_long_array(long long array[], int size){
    for(int i = 0; i <= size; i++){
        std::cout << array[i] << std::endl; 
    }
}


int main(int argc, char const *argv[])
{
    int upper_limit = 0; 
    std::cout << "Please provide an upper limit." << std::endl; 
    std::cin >> upper_limit; 

    // long long because the value get big quite fast
    long long fibonacci[upper_limit]; 
    
    long long x=0,y=1;

    for(int i=0; i<=upper_limit; i++){
        fibonacci[i] = x+y; 
        x = y;
        y = fibonacci[i]; 
    }

    print_long_long_array(fibonacci, sizeof(fibonacci)/ sizeof(long long)); 

    return 0;
}
