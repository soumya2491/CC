#include<iostream>

int main(void){
    int s;
    std::cin >>s;
    for (int i = 0; i < s; i++)
    {
        for (int i = 0; i < s; i++)
        {
            std::cout << "* ";
        }
        std::cout << std::endl;
    }
    return 0;
}