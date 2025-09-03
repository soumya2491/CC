#include <iostream>
#include <vector>

std::vector<int> countSmallerAfterSelf(const std::vector<int>& nums) {
    int n = nums.size();
    std::vector<int> result(n, 0);

    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = i + 1; j < n; j++) {
            if (nums[j] < nums[i]) {
                count++;
            }
        }
        result[i] = count;
    }

    return result;
}

int main() {
    int size;
    
    std::cin >> size;

    std::vector<int> nums(size);
   
    for (int i = 0; i < size; i++) {
        std::cin >> nums[i];
    }

    std::vector<int> output = countSmallerAfterSelf(nums);

    
    for (int val : output) {
        std::cout << val << " ";
    }
    std::cout << std::endl;

    return 0;
}