#include <iostream>
#include <vector>

int main(void){
    int n;
    std::vector<int> arr;
    std::cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        std::cin >> x;
        arr.push_back(x);
    }
    int *ptr = &arr[0];
    for (int i = 0; i < n; i++)
    {
        std::cout << *ptr << '\n';
        ptr++;
    }
    
}