// this file will contain the code to check if a given string is
//  palindrome or not, that is a string that is spelled the same forward
//  as it is backwards
#include <iostream>

using namespace std;

bool isPalindrome(string str)
{
    string rev = str;

    reverse(rev.begin(), rev.end());

    if (rev == str)
    {
        return true;
    }

    return false;
}

int main()
{
    string str = "racecar";
    if (isPalindrome(str) == true)
    {
        cout << "The string: " + str << " is a palindrome" << endl;
    }
    else
    {
        cout << "The string: " + str << " is not a palindrome" << endl;
    }

    return 0;
}