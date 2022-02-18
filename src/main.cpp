#include <iostream>
#include <string>
#include <filesystem>


// @args :: <pattern> <file_name>
int main(int argc, char **argv)
{
    if ( argc != 3 ) {
	    std::cout  << "USAGE :: <executable> <pattern> <file_name>" << std::endl;
    }
    
    std::string regexPattern = argv[1];
    std::string fileName = argv[2];
    // now going to check if the mentioned file exists as that path or not
    
    if (!std::filesystem::exists(fileName))
        std::cout << "ERROR : File" << fileName << "Not Found" << std::endl;

    std::cout << "Regex Pattern : " << regexPattern << std::endl;
    std::cout << "File Name : " << fileName << std::endl;

    return 0;
    
}
