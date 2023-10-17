#include<iostream>

int factorial_recursion(int upper_limit, int result){

    if(upper_limit <= 0){
        std::cout << "Factorial of "<< upper_limit << " is: " << result << std::endl; 
        return result;
    }

    result *= upper_limit;



    return factorial_recursion(--upper_limit, result);     
}

void factorial_iteration(){

    int upper_limit = 7;
    int result = 1; 
    for(int i=1; i<=upper_limit; i++){ 
        result = result * i; 
    }    
    std::cout << "Factorial of "<< upper_limit << " is: " << result << std::endl; 
}


int main(int argc, char const *argv[])
{
    factorial_recursion(7,1); 
    //factorial_iteration();
    return 0;
}

