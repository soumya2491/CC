#include <iostream>

int main (void){
    int n;
    do
    {
        std:: cout << "Enter the number : ";
        std::cin >> n;
    } while (n!=0);
    std::cout << "You entered 0";
    return 0;
}