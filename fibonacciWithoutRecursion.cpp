// Program for FIbonacci without Recusion

#include <iostream>
using namespace std;

int main()
{
	int input, pnum = 0, lnum = 1, fib = 0;
    cin >> input;

    cout << pnum << lnum << endl;

    for(int i = 1; i < input; i++)
    {
        
       fib = lnum + pnum;
        pnum = lnum;
        lnum = fib;
        cout << fib << endl;
    }

	return 0;
}