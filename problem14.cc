#include <iostream>
#include <algorithm>
#include <vector>

std::vector<int> generateFibonacciSeries(int n) {
    std::vector<int> series;
    if (n <= 0) return series;
    series.push_back(0);
    if (n == 1) return series;
    series.push_back(1);
    for (int i = 2; i < n; ++i) {
        series.push_back(series[i-1] + series[i-2]);
    }
    return series;
}

int main(void){
    int n;
    std::cin >> n;
   std::vector<int> series =  generateFibonacciSeries(n);
    for(int num : series){
        std::cout << num << " ";
    }
    return 0;
}