#include <iostream>
 int change_value(int &n){
    return n+=20;
 }
int main (void){
    int n;
    std::cin >> n;
    std::cout << change_value(n);
}