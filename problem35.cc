
#include <iostream>
int main(void){
    int s;
    std::cin >> s;

    for (int i = 0; i < s; i++) {
        for (int j = 0; j < i; j++) {
            std::cout << " ";
        }
        for (int j = 0; j < s - i; j++) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    return 0;
}