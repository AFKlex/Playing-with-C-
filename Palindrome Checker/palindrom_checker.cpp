#include<iostream>
//#include<string>
#include<cctype>
#include<algorithm>

std::string reverse_string(std::string input){

    std::string reverse_string = "";
    for(int i=input.size()-1; i>= 0;  i--){
        reverse_string.push_back(input.at(i));
    }
        
    return reverse_string;
}

std::string lower_string(std::string input){
    std::transform(input.begin(), input.end(), input.begin(), 
                [](unsigned char c){return std::tolower(c);});

    return input;
}

int main(int argc, char const *argv[])
{
    
    std::string string_to_check; 
    std::cout << "Pls provide a Palindrom: " << std::endl; 
    std::cin >> string_to_check; 

    string_to_check = lower_string(string_to_check);

    std::string new_string; 
    new_string = reverse_string(string_to_check); 

    if(new_string == string_to_check){
        std::cout << string_to_check <<" is a polindrom!" << std::endl; 
    }else{
        std::cout << string_to_check << " is not a polindrom!" << std::endl; 
    }


    return 0;   
}

