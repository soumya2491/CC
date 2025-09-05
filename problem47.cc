#include<iostream>
#include<cmath>
int main(){
    int n;
    std::cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        std::cin>>arr[i];
    }
    int max=arr[0];
    for(int i=0;i<n;i++){
        max=std::max(arr[i],arr[0]);
        
    }
    std::cout<<max<<'\n';
     int min=arr[0];
    for(int i=0;i<n;i++){
        min=std::min(arr[i],arr[0]);
}
std::cout<<min<<'\n';

 int sum2=min+max;
 std::cout<<sum2<<'\n';
}