// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter the number of terms: ";
//     cin >> n;

//     int a = 0, b = 1;
//     cout << "Fibonacci Series: ";
//     for (int i = 0; i < n; ++i) {
//         cout << a << " ";
//         int next = a + b;
//         a = b;
//         b = next;
//     }
//     cout << endl;
//     return 0;
// }



// int num;
// cout << "Enter a number to check if it is prime: ";
// cin >> num;

// bool isPrime = true;
// if (num <= 1) {
//     isPrime = false;
// } else {
//     for (int i = 2; i * i <= num; ++i) {
//         if (num % i == 0) {
//             isPrime = false;
//             break;
//         }
//     }
// }

// if (isPrime)
//     cout << num << " is a prime number." << endl;
// else
//     cout << num << " is not a prime number." << endl;




    // int start, end;
    // cout << "Enter the start of the range: ";
    // cin >> start;
    // cout << "Enter the end of the range: ";
    // cin >> end;

    // cout << "Prime numbers between " << start << " and " << end << " are: ";
    // for (int num = start; num <= end; ++num) {
    //     if (num <= 1) continue;
    //     bool isPrime = true;
    //     for (int i = 2; i * i <= num; ++i) {
    //         if (num % i == 0) {
    //             isPrime = false;
    //             break;
    //         }
    //     }
    //     if (isPrime)
    //         cout << num << " ";
    // }
    // cout << endl;


#include<iostream>
#include<cmath>
using namespace std;
int main(){
    double p, r, t;
    cout << "Enter principal amount (p): ";
    cin >> p;
    cout << "Enter annual interest rate (r) in %: ";
    cin >> r;
    cout << "Enter time (t) in years: ";
    cin >> t;

    double ci = p * (pow(1 + r / 100, t) - 1);
    cout << "Compound Interest = " << ci << endl;
}

