#include <iostream>
int sum(int* s, int* i);
int sum(int* s, int* i, int *si);
int sum(int* s, int* i, int *si){
    return *s+*i+*si;
}
int sum(int* s, int* i){
    return *s+*i;
}

int main(void){
    int s,i,si;
    std::cin >> s;
    std::cin >> i;
    std::cin >> si;
    std::cout << sum(&s,&i) << " " << sum (&s,&i,&si) << '\n';
    return 0;
}