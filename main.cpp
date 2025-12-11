

#include <iostream>
using namespace std;

void even(int num){
    if(num%2==0){
        std::cout<<"Even Number"<<std::endl;
    }
    else{
        std::cout<<"Odd Number"<<std::endl;
    }
}

void fun(int a,int b)
{
  int c=a+b;
  cout<<c;
}

int main() {
    std::cout << "Hi" << std::endl;
    
    fun(5,6);
    even(4);
    return 0;
}

