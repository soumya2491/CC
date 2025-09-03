#include <iostream>
#include <string>
void string_changer(std::string name);
void string_changer(std::string name){
     name = "sou...";
    std::cout << name << '\n';
}
int main(void){
    std::string name;
    std::cin >> name;
    std::cout << "Before changing : " << name << '\n';
    string_changer(name);
}