#include<iostream>
#include<fstream> // importes the ofstream and the ifstream

int main(int argc, char const *argv[])
{
    std::ofstream file("my_file2.txt",std::ios_base::app); // open the files with append
    file << "Added a String to file \n"; 
    file << "Added a second String to file\n";
    file.close();

    std::string my_text; 

    std::ifstream read_file;
    read_file.open("my_file.txt"); 
    if(read_file){
        std::cout << "File does Exist" << std::endl; 
    }else{
        std::cout << "File does not Exist"<< std::endl;        
    }
    while (getline(read_file,my_text)){
        std::cout << my_text<< std::endl; 
    }

    read_file.close(); 



    return 0;
}


