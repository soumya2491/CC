#include <iostream>
int sum(int i, int s);
int sum(int i, int s){
    return i+s;
}
int main(void){
    int i,s;
    std::cin >> i;
    std::cin >> s;
    std::cout << sum(i,s) << '\n';
    return 0;
}