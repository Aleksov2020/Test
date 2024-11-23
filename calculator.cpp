#include <iostream>
#include <limits>
using namespace std;

int main() {
    double num1;
    double num2;
    char op;
    double result;
    while (true){
        cout << "Enter first number: ";
        cin >> num1;
        if (cin.fail()) {
            cout << "\nInvalid input. Please enter a valid number.\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } 
        else {
            break;
        }
    }
    while (true){
        cout << "Enter an operator (+, -, *, /, ^): ";
        cin >> op;
        if ((op == '+')or(op == '-')or(op == '*')or(op == '/')or(op == '^'))
        {
            break;
        }
        else {
            cout << "\nInvalid input. Please enter a valid operator.\n";
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    }
    while (true){
    cout << "Enter second number: ";
        cin >> num2;
        if (cin.fail()) {
            cout << "\nInvalid input. Please enter a valid number.\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } 
        else {
            break;
        }
    }
    switch(op) {
        case '+':
            cout << "\nResult: " << num1 + num2 << "\n";
            break;
        case '-':
            cout << "\nResult: " << num1 - num2 << "\n";
            break;
        case '*':
            cout << "\nResult: " << num1 * num2 << "\n";
            break;
        case '/':
            if (num2 != 0)
                cout << "\nResult: " << num1 / num2 << "\n";
            else
                cout << "\nError: Division by zero\n";
            break;
        case '^':
            result = num1;
            for (int i = 0; i < num2 - 1; i++)
            {
                result = result * num1;
            }
            
            cout << "\nResult: " << result << "\n";
            break;
        default:
            cout << "\nError\n";
            break;
    }
    cout << "\nPress Enter to exit...";
    cin.ignore();
    cin.get();     
}