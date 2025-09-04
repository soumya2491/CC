// #include <iostream>
// #include <cmath>
// bool armstrong(int n);
// int main(){
//     int n;
//     std::cin >> n;
//    bool s = armstrong(n);
//    if (s)
//    {
//     std::cout << "Number is Armstrong Number" << '\n';
//    }
//    else std::cout << "Number is not Armstrong Number" << '\n';

//    return 0;
   
// }
// bool armstrong (int n){
//     int s = 0, digit,sum = 0;
//     int temp = n;
//     while (temp!=0)
//     {
//         temp/=10;
//         s++;
//     }
//     temp = n;
//     while (temp != 0)
//     {
//        digit = temp%10;
//        sum+=pow(digit,s);
//        temp/=10;
//     }
//     if (sum == n)
//     {
//         return true;
//     }
//     else return false;
// }
#include<iostream>
#include<cmath>
int main(){
    int n;
    std::cin>>n;
    int temp = n;
    int c =0;
    while (temp!=0)
    {
    // int a=n%10;
    //    std::cout<<a<<'\n';
       n/=10;
       c++;
    }
    int sum = 0;
    temp = n;
    while (temp!=0)
    {
        int b = temp%10;
        sum += pow(b,c);
        temp/=10;

    }
    std::cout<<sum<<'\n';
if(sum==n){
    std::cout<<"Number is armstrong";
}
else {
    std::cout<<"Number is not armstrong";
}
}