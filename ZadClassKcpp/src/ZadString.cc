#include "ZadString.h"
#include <iostream>
#include <sstream>

void ZadString::execute() {
    std::cout << "\n=== Zadanie 1.2 - String Example ===\n";
    stringExamples();
}

void ZadString::stringExamples() {
    std::string str1 = "Hello";
    std::string str2 = "World";
    
    // Concatenation
    std::string result = str1 + " " + str2;
    std::cout << "Concatenation: " << result << std::endl;
    
    // String stream
    std::stringstream ss;
    ss << "The combined string is: " << result << " and its length is: " << result.length();
    std::cout << ss.str() << std::endl;
}
