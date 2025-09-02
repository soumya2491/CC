#include <iostream>
 int factorial(int n);
 int factorial(int n){
    if (n<=1)
    {
        return 1;
    }
    else{return n*factorial(n-1);}
    
 }
 int sum_odd (int n){
    int sum = 0;
    for (int i = 0; i <= n; i++)
    {
         if (i%2!=0)
         {
            sum+=i;
         }
         
    }
    return sum;
}
void even(int n){
    for (int i = 0; i <= n; i++)
    {
        if (i%2==0)
    {
        std::cout << i << '\n';
    }
    }
}
int main(void){
    using std::cout, std::cin;
    int n;
    cin >> n;
    cout << " natural numbers are: " << '\n';
    for (int i = 0; i <= n; i++)
    {
        cout << i << '\n';
    }
    cout << '\n';
    cout << "sum of first odd natural numbers are: " << sum_odd(n) << '\n'<< '\n';
    cout << "Table of the number is : " << '\n';
    for (int i = 0; i < 10; i++)
    {
        cout << n <<  " X " << i << " = " <<  n*i<< '\n';
    }
    cout << '\n';
    cout << "factorial of the number is : " << '\n';
    cout << factorial(n) << '\n' << '\n';
    cout << "first n even natural numbers are: " << '\n';
    even(n);
    return 0;
}