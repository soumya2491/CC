#include <iostream>
#include <cmath>

int main(void){
    int n,sum = 0,digit,count = 0;
    std::cin >> n;
    int temp = n;
    while (n != 0){
        n /=10;
        count++;
    }
    n = temp;
    while (n!=0)
    {
       digit =  n%10;
        sum+=pow(digit,count);
        n/=10;
    }
    if (sum == temp)
    {
        std::cout << "Armstrong number" << '\n';
    }
    else std::cout << "not an armstrong number" << '\n';
    
    
    return 0;
    
}