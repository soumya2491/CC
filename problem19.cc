#include <iostream>

void pass_by_reference(int *s, int *i)
{
    int temp = *s;
    *s = *i;
    *i = temp;
    std::cout << *s << " " << *i << '\n';
}

int main()
{
    int s, i;
    std::cin >> s >> i;

    std::cout << "pass by value: ";
    int temp = s;
    s = i;
    i = temp;
    std::cout << s << " " << i << '\n';
    std::cout << "pass by reference: " << '\n';
    pass_by_reference(&s,&i);
    return 0;
}
