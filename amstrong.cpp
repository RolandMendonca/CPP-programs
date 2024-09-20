#include <iostream>

using namespace std;

int main()
{
    int num,temp,sum=0,n;

    cout << "Enter a number:-";
    cin >>num;

    while (n>0)
    {
        temp = n%10;
        sum = sum + (temp*temp*temp);
        n = n/10;
    }
    
    if (sum == num)
    {
        cout <<"Amstrong number";
    }
    else 
        cout <<"Not an amstrong number";

    

}