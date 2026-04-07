#include <iostream>

using namespace std;

int main() {
    int num1;
    int num2;

    cout << "Enter First No.: ";
    cin >> num1;

    cout << "Enter Second No.: ";
    cin >> num2;

    char op;

    cout << "Enter Operator (+,-,*,/): ";
    cin >> op;

    switch (op){
        case '+':
            cout << num1 << op << num2 << " = " << num1 + num2;

        case '-':
            cout << num1 << op << num2 << " = " << num1 - num2;

        case '*':
            cout << num1 << op << num2 << " = " << num1 * num2;

        case '/':
            cout << num1 << op << num2 << " = " << (double)num1 / num2;

        default:
            cout << "Invalid Operator. Use (+,-,*,/)";
            
    }
    return 0;
}