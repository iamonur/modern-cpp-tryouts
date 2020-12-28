#include <iostream>
#include <type_traits>

void foo(char*);
void foo(int);

int main(){
    if(std::is_same<decltype(NULL), decltype(0)>::value) std::cout<<"Your compiler defines NULL as 0"<<std::endl;
    if(std::is_same<decltype(NULL), decltype((void*)0)>::value) std::cout<<"Your compiler defines NULL as (void*)0."<<std::endl;
    if(std::is_same<decltype(NULL), decltype(nullptr)>::value) std::cout<<"Your compiler defines NULL as nullptr."<<std::endl;

    foo(0);
    foo(nullptr);
}

void foo(char*){
    std::cout<<"Char-p"<<std::endl;
}

void foo(int){
    std::cout<<"Int"<<std::endl;
}