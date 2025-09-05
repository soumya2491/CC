#include <iostream>
#include <unordered_map>
// #include <vector>

int main(void){
    int arr[8] = {2,2,4,4,8,8,5,5};
    std::unordered_map<int,int> repeat;
    for(int num : arr){
        repeat[num]++;
    }
    for(auto num : repeat){
        if(num.second>1){
            std::cout << num.first << " comes " << num.second << " times" <<'\n';
        }
    }
    return 0;
} 
 
    