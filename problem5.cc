#include <iostream>
int main(void){
    char adhaar,pan;
    do
    {
        std::cout << "Adhaar card :  (y/n)" << '\n';
        std::cin >> adhaar;
          std::cout << "Pan card :  (y/n)" << '\n';
        std::cin >> pan;
    } while ((adhaar != 'y' && pan != 'y') || (adhaar != 'Y' && pan != 'Y') ||( adhaar != 'y' && pan != 'Y') || (adhaar != 'Y' && pan != 'y'));
    
    if((adhaar == 'y' && pan == 'y') || (adhaar == 'Y' && pan == 'Y') ||( adhaar == 'y' && pan == 'Y') || (adhaar == 'Y' && pan == 'y')){
        std::cout << "You are eligible to open the Bank account" << '\n';
    }
    else{
        std::cout << "You are not eligible to open the Bank account" << '\n';
    }
}