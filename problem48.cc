#include <iostream>
#include <string>

class Humans {
    public:
        std::string name;
        int age;
        int fees;
        Humans(std::string name,int age){
            this -> name = name;
            this -> age = age;
        }

        Humans(std::string name, int age, int fees){
            this -> name = name;
            this -> age = age;
            this -> fees = fees;
        }
        void display_details(){
            
            std::cout << name << '\n';
            std::cout << age << '\n';
            std::cout << fees << '\n';
        }
};
int main(void){
    std::string name;
    int age, fees;
    std::cin >> age;
    std::cin >> fees;
    std::getline(std::cin >>std::ws,name);
    Humans n(name , age, fees);
    Humans n2(name,age);
    n.display_details();
    n2.display_details();
    return 0;
}