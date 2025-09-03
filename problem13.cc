#include <iostream>
int main(void) {
    int n;
    std::cin >> n;
    bool isPrime = true;

    if (n <= 1) isPrime = false;
    else {
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                isPrime = false;
                break; 
            }
        }
    }
    if (isPrime)
        std::cout << "This is a prime number";
    else
        std::cout << "This is not a prime number";
    return 0;
}