#include <iostream>
#include <string>
void country (std::string name);
void country(std::string name = "INDIA"){
    std::cout << "YOU LIVE IN " << name << '\n'; 
}
int main(void){
    std::string n;
    std::cout << "Enter the name of the country you live in: " << '\n';
    std::cin >> n;
    country(n);
    return 0;
}