#include <iostream>
int main(void){
    int n;
    std::cin >> n;
    int sum = 0;
    for (int i = 0; i <= n; i++)
    {
         if (i%2!=0)
         {
            sum+=i;
         }
         
    }
    std::cout << sum;
    return 0;
}