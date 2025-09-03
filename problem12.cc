#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin >> n;
    std::vector<int> digits;
    while (n != 0) {
        digits.push_back(n % 10);
        n /= 10;
    }

    for (int digit : digits) {
        std::cout << digit << '\n';
    }

    return 0;
}
