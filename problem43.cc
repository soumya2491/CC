#include <iostream>
#include <cmath>
bool palindrome(int n);
int main(void){
    int n;
    std::cin >> n;
    std::cout << palindrome(n);
}
bool palindrome(int n){
    int reversed = 0,digit,temp = n;
    while (temp != 0)
    {
        digit = temp%10;
        reversed = reversed*10 + digit;
        temp/=10;
    }
    if (n == reversed)
    {
        return true;
    }
    else return false;
}