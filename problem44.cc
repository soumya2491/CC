// #include<iostream>
// #include<cmath>
// int main(){
//     int n;
//     std::cin>>n;
//     int temp = n;
//     int c =0;
//     while (temp!=0)
//     {
//     // int a=n%10;
//     //    std::cout<<a<<'\n';
//        temp/=10;
//        c++;
//     }
//     int sum = 0;
//     temp = n;
//     while (temp!=0)
//     {
//         int b = temp%10;
//         sum += pow(b,c);
//         temp/=10;

//     }
//     std::cout<<sum<<'\n';
// if(sum==n){
//     std::cout<<"Number is armstrong";
// }
// else {
//     std::cout<<"Number is not armstrong";
// }
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
    // int a=n%10;3
    //    std::cout<<a<<'\n';
       temp/=10;
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