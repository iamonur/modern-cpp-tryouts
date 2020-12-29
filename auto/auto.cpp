#include <iostream>
#include <vector>

int main(){
    std::vector<int> asd = {1,2,3};

    for(auto it = asd.begin(); it != asd.end(); ++it){
        std::cout<<*it<<std::endl;
    }
}