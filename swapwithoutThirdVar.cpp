#include <iostream>

using namespace std;

int main()
{
    int num1, num2;

    cout << "Enter First numbers:-";
    cin >> num1;
    cout << "Enter Second numbers:-";
    cin >> num2;

    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;

    cout << "Number 1= " << num1 << endl;
    cout << "number 2= " << num2;

    return 0;

}