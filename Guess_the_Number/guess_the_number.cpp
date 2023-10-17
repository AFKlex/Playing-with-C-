#include<iostream>
#include<cstdlib>
#include<ctime>


int generate_random_number(int min, int max){

    std::srand(std::time(nullptr)); // use current time as seed for random generator
 
    int random_variable = std::rand() % (max-min) + min;//Max is not included in the range while min is. 
    return random_variable;
}

int main(int argc, char const *argv[])
{
    int goal_number = generate_random_number(0,1001); 
    std::cout << "Generated Number: " << goal_number << std::endl; 

    int trys = 10;
    bool user_has_won = false;  
    int user_input = 0;

    while (!user_has_won && trys >0){
        std::cout << "\nPlease input your number in mind: " << std::endl; 
        std::cin >> user_input;

        if (user_input == goal_number){
            user_has_won = true; 
            std::cout << "\nUser hat die Zahl: " << user_input << " richtig erraten." << std::endl; 
            std::cout << "User had " << trys << " trys remaning." << std::endl; 
        }else{
            trys--; 
            if (user_input < goal_number){
                std::cout << "\nThe input was to low." << std::endl; 
 
            }else{
                std::cout << "\nThe input was to high." << std::endl; 
            }
            if (trys == 0){
                std::cout << "\nPlayer was not able to find the number." << std::endl;
            }
        }
    }
    return 0;
}


