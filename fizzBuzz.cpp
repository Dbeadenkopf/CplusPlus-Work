// This file will contain the c++ code for the popular yet simple
// interview qeustion fizzbuzz
#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> FizzBuzz(int n)
{
    vector<string> buzz;
    for (int i = 1; i <= n; ++i)
    {
        if (i % 3 == 0 && i % 5 == 0)
        {
            buzz.push_back("Fizzbuzz");
        }
        else if (i % 3 == 0)
        {
            buzz.push_back("Fizz");
        }
        else if (i % 5 == 0)
        {
            buzz.push_back("Buzz");
        }
        else
        {
            buzz.push_back(to_string(i));
        }
    }
    return buzz;
}

int main()
{
    int n = 15;
    vector<string> result = FizzBuzz(n);

    for (const string &n : result)
    {
        cout << n << " " << endl;
    }
    cout << endl;

    return 0;
}