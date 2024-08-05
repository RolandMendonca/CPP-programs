//To check if a number is a prime or its not a prime

#include <iostream>

using namespace std;

int main()
{
    int num1, flag=1;

    cout << "Enter the number:-";
    cin >> num1;

    if (num1 == 1 || num1 == 0)
    {
        flag = 1;
    }

    for (int i = 2; i < num1 / 2; i++)
    {
        if (num1 % i == 0)
        {         
            flag = 0;
            break;
        }
    }
    
    if (flag == 1)
    {
        cout << num1 << " is a prime";
    }
    else{
        cout << num1 << " 6is not a prime";
    }

}