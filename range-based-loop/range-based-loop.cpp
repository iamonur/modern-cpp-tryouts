#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

int main() {
    std::vector<std::string> vec = {"Hel","lo","Wo","rld!"};
    
    
    for(auto element : vec) std::cout << element << std::endl; //RO
    for(auto &element : vec) element +="\n"; //RW
    for(auto element : vec) std::cout << element << std::endl; //RO
}