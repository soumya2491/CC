#include <iostream>
#include <cmath>
#include <limits>
double inrToUsd(double inr)
{
    return inr / 85.8;
}
double usdToInr(double usd)
{
    return usd * 85.8;
}
double celsiusToFahrenheit(double c)
{
    return c * 9.0 / 5.0 + 32.0;
}
double fahrenheitToCelsius(double f)
{
    return (f - 32.0) * 5.0 / 9.0;
}
using std::cout;

void showMenu()
{
    cout << "Advanced Calculator\n";
    cout << "-------------------\n";
    cout << "1. Addition\n";
    cout << "2. Subtraction\n";
    cout << "3. Multiplication\n";
    cout << "4. Division\n";
    cout << "5. Power\n";
    cout << "6. Square Root\n";
    cout << "7. Logarithm (base 10)\n";
    cout << "8. Sine\n";
    cout << "9. Cosine\n";
    cout << "10. Tangent\n";
    cout << "0. Exit\n";
    cout << "Choose an option: ";
}

int main()
{
    using std::cout, std::cin;
    using namespace std;
    int choice;
    double num1, num2, result;

    do
    {
        showMenu();
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
            result = num1 + num2;
            cout << "Result: " << result << '\n';
            break;
        case 2:
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
            result = num1 - num2;
            cout << "Result: " << result << '\n';
            break;
        case 3:
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
            result = num1 * num2;
            cout << "Result: " << result << '\n';
            break;
        case 4:
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
            if (num2 == 0)
            {
                cout << "Error: Division by zero!" << '\n';
            }
            else
            {
                result = num1 / num2;
                cout << "Result: " << result << '\n';
            }
            break;
        case 5:
            cout << "Enter base and exponent: ";
            cin >> num1 >> num2;
            result = pow(num1, num2);
            cout << "Result: " << result << '\n';
            break;
        case 6:
            cout << "Enter a number: ";
            cin >> num1;
            if (num1 < 0)
            {
                cout << "Error: Negative input!" << '\n';
            }
            else
            {
                result = sqrt(num1);
                cout << "Result: " << result << '\n';
            }
            break;
        case 7:
            cout << "Enter a number: ";
            cin >> num1;
            if (num1 <= 0)
            {
                cout << "Error: Non-positive input!" << '\n';
            }
            else
            {
                result = log10(num1);
                cout << "Result: " << result << '\n';
            }
            break;
        case 8:
            cout << "Enter angle in degrees: ";
            cin >> num1;
            result = sin(num1 * M_PI / 180.0);
            cout << "Result: " << result << '\n';
            break;
        case 9:
            cout << "Enter angle in degrees: ";
            cin >> num1;
            result = cos(num1 * M_PI / 180.0);
            cout << "Result: " << result << '\n';
            break;
        case 10:
            cout << "Enter angle in degrees: ";
            cin >> num1;
            result = tan(num1 * M_PI / 180.0);
            cout << "Result: " << result << '\n';
            break;
        case 11:
            cout << "Enter the temp in celsius: " << '\n';
            cin >> num1;
            result = celsiusToFahrenheit(num1);
            cout << "Result: " << result << '\n';
            break;
        case 12:
            cout << "Enter the temp in fahrenheit: " << '\n';
            cin >> num1;
            result = fahrenheitToCelsius(num1);
            cout << "Result: " << result << '\n';
            break;
        case 13:
            cout << "Enter the usd: " << '\n';
            cin >> num1;
            result = usdToInr(num1);
            cout << "Result: " << result << '\n';
            break;
        case 14:
            cout << "Enter the INR: " << '\n';
            cin >> num1;
            result = inrToUsd(num1);
            cout << "Result: " << result << '\n';
            break;
        case 0:
            cout << "Exiting calculator. Goodbye!" << '\n';
            break;
        default:
            cout << "Invalid option. Try again.\n";
        }
        cout << '\n';
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    } while (choice != 0);

    return 0;
}