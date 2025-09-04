
#include <iostream>
#include <string>

void reverseString(std::string& str) {
    int n = str.length();
    for(int i = 0; i < n / 2; ++i) {
        std::swap(str[i], str[n - i - 1]);
    }
    for (int i = 0; i < n; i++)
    {
        std::cout << str[i];
    }
    
}
int main(void){
    std::string name;
    std::getline(std::cin, name);
    reverseString(name);
}