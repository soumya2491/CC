#include <iostream>
#include <vector>
#include <sstream>

class counter{
    
    public:
    static int count;
    counter(){
        count++;
    }

};

int counter::count = 0;
auto sum = [](int a,int b){
    return a+b;

};

int main(void){
    std::cout << "sum: " << sum(10,20)<< '\n';
    counter c1,c2;
    std::cout << "counter: " <<  counter::count<< '\n';
    std::cout << "counter: " << counter::count << '\n';
    return 0;
}