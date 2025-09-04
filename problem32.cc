#include <iostream>

void draw(int s)
{
    if (s == 1)
        return;
    else
    {
        for (int i = 0; i < s - 1; i++)
        {
            
            std::cout << "* ";
        }
        std::cout << std::endl;
    }
    draw(s - 1);
}
int main(void)
{
    int s;
    std::cin >> s;
    draw(s);
    return 0;
}