#include <iostream>
#include <algorithm>
#include <vector>

int main(void){
    using std::cout,std::cin;
    int n;
    cin >> n;
    std::vector <int> arr;
    for (int i = 0; i < n; i++)
    {
        int x;
        cout << "Enter the number " << '\n';
        cin >> x;
        arr.push_back(x);
    }
    int s = arr[0];
    for (int i = 0; i < n-1; i++)
    {
        s = std::max(s,arr[i+1]);
    }
    cout << s << " is the greatest one";  
}