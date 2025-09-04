#include <iostream>
void draw(int height, int current = 1) {
    if (current > height)
        return;
    for (int j = 1; j <= current; ++j) {
        std::cout << "* ";
    }
    std::cout << std::endl;
    draw(height, current + 1);
}


int main() {
    int n;
    std::cout << "Enter the height of the triangle: ";
    std::cin >> n;
    draw(n);
    return 0;
}