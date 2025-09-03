#include <iostream>
 int main(void){
    int n;
   std::cin >> n;
    int marks[n];
    for (int i = 0; i < n; i++)
    {
        std::cin >> marks[i];
    }
    std::cout << "The array is : " << '\n' ;
    for (int i = 0; i < n; i++)
    {
        std::cout << marks[i] << " ";
    }
    int length = sizeof(marks)/sizeof(marks[0]);
    std::cout << '\n' << "The length of the  arr is : " << length;
    return 0;
 }