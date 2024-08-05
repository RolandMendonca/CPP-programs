// To check if a number is palindrome

#include <iostream>

using namespace std;

int main()
{
    int num, rnum, rev, rem, flag=0, num1;

    cout << "Enter a numer:-";
    cin >> num;
    num1 = num;

    while (num1!=0)
    {
        rem = num1%10;
        rnum = rnum * 10 + rem;
        num1 = num1/10;
    }
    
    if (rnum == num)
    {
        cout << "Number is palindrome";
    }
    else
    {
        cout << "Number is not a palindrome";
    }

return 0;
}

