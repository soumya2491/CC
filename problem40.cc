#include <iostream>
#include <algorithm>
#include <string>

bool isAnagram(const std::string& s1, const std::string& s2) {
    if (s1.length() != s2.length()) return false;
    std::string a = s1, b = s2;
    std::sort(a.begin(), a.end());
    std::sort(b.begin(), b.end());
    return a == b;
}

int main() {
    std::string str1, str2;
    std::cout << "Enter first string: ";
    std::cin >> str1;
    std::cout << "Enter second string: ";
    std::cin >> str2;

    if (isAnagram(str1, str2))
        std::cout << "Anagram\n";
    else
        std::cout << "Not an anagram\n";
    return 0;
}