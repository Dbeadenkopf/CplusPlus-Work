// this file will contain c++ code to reverse a given string
#include <iostream>

using namespace std;

string getReversedStr(string str)
{
    string rev = str;
    reverse(rev.begin(), rev.end());

    return rev;
}

int main()
{
    string s1 = "dog";
    cout << "The reverse string of " + s1 + " = " << getReversedStr(s1) << endl;

    return 0;
}