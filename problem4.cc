#include <iostream>

int main(void){
    using std::cout,std::cin;
    int a,b;
    cin >> a;
    cin >> b;
    cout << "Sum of your two numbers is : " << a+b << '\n';
    cout << "Subtraction of your two numbers is : " << a-b << '\n';
    cout << "Division of your two numbers is : " << (float)a/b << '\n';
    cout << "Multiplication of your two numbers is : " << a*b << '\n';
    return 0;
}