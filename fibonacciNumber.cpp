// This file will contain the code to find the nth fibonocci sequence
// that is a sequence where the next element is the sum of the first two elements
// ex n= 4 =  0 1 1 2 3 5 8
#include <iostream>

using namespace std;

int getNthFibonacci(int n)
{
    if (n <= 1)
    {
        return n;
    }

    return getNthFibonacci(n - 1) + getNthFibonacci(n - 2);
}

int main()
{
    int n = 4;
    cout << getNthFibonacci(n) << endl;
    cout << endl;

    return 0;
}
