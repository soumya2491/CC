#include <iostream>
#include <vector>

int main() {
    int rows, col;
   
    std::cin >> rows;
    std::cin >> col;

    std::vector<std::vector<int>> arr(rows, std::vector<int>(col));

    std::cout << "Enter elements row by row:\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < col; ++j) {
            std::cin >> arr[i][j];
        }
    }

    int sum = 0;
    std::cout << "\nMatrix:\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < col; ++j) {
            std::cout << arr[i][j] << " ";
            sum += arr[i][j];
        }
        std::cout << "\n";
    }

    std::cout << "\nThe sum of all elements is: " << sum << std::endl;

    return 0;
}
