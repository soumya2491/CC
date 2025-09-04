#include <iostream>

void printRow(int n, int col) {
    if (col > n) return;
    std::cout << (col % 2);
    printRow(n, col + 1);
}


void printTriangle(int n, int row = 1) {
    if (row > n) return;
    printRow(row, 1);
    std::cout << std::endl;
    printTriangle(n, row + 1);
}

int main() {
    int n;
    std::cout << "Enter number of rows: ";
    std::cin >> n;
    printTriangle(n);
    return 0;
}