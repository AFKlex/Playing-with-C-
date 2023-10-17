#include<iostream>
#include<vector>


double add(std::vector<double> my_vector){
    double sum  = 0.0;
    for(int i=0; i< my_vector.size(); i++){
        sum+= my_vector[i];
    }
    return sum;
}
double subract(std::vector<double> my_vector){
    return my_vector[0] - my_vector[1]; 
}

double divide(std::vector<double> my_vector){
    return my_vector[0] / my_vector [1]; 
}

double multiply(std::vector<double> my_vector){
    return my_vector[0] * my_vector [1]; 
}

int main(int argc, char const *argv[])
{
    std::cout << "What do you want to do: \n" << 
                "1. Add \n"<<
                "2. Subtract\n" <<
                "3. Multiply\n" << 
                "4. Divide \n" << std::endl;

    std::cout << "Pls choose a Numer: " << std::endl; 
    
    int action_to_do = 0; 
    std::cin >> action_to_do; 
    std::cout << "Pls provide the numbers you want to calculate: " << std::endl; 
    
    std::vector<double> input_vector;
    double input;
   
    do{
        std::cin >> input;
        if (!std::cin) {
            // Input failed, which means it's not an integer.
            break; // Exit the loop.
        }
        std::cout << "Input: " << input << std::endl; 

        input_vector.push_back(input);
    }while(input); 

    int array_size = sizeof(input_vector)/ sizeof(double);
    double result = 0.0; 

    std::cout << "The vector holds: " << input_vector.size() << std::endl; 

    switch(action_to_do){
        case 1: 
        // Add 
        result = add(input_vector);
        
        break;

        case 2: 
        // Subract 
        result = subract(input_vector);
         
        break;

        case 3: 
        // Multiply
        result = multiply(input_vector);
        
        break; 
        case 4: 
        // Divide
        result = divide(input_vector);
        break;

        default:
            std::cout << "You inserted a wrong number" << std::endl; 
        break;  

    }
    std::cout <<"Your Result is: " <<  result << std::endl;
    return 0;
}



