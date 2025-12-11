

#include <iostream>
void even(int num){
    if(num%2==0){
        std::cout<<"Even Number"<<std::endl;
    }
    else{
        std::cout<<"Odd Number"<<std::endl;
    }
}
int main() {
    std::cout << "Hello, World!" << std::endl;
    even(4);
    return 0;
}