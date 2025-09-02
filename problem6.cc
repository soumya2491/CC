#include <iostream>
 int main (void){
    using std::cout,std::cin;

    int n;
    cout << "Enter the amount that you have: " << '\n';
    cin >> n;
    if (n>=50000)
    {
        cout << "You can purchase -i watch" << '\n';
        if (n>=70000)
        {
            cout << "You can also purchase -i phone" << '\n';
        }
        if (n>=90000)
        {
            cout << "you can purchase a mackboook air too!!" << '\n';
        }
        if(n >= 120000){
            cout << "Woww!! You are too rich you can purchase the iphone company itself" << '\n';
        }
        
    }
    else{
        cout << "You don't have enough paisaaa!! " << '\n';
        cout << "GAREEEBBB!!!!" << '\n';
    }
    

 }