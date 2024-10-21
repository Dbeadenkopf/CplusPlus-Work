// this file will contain c++ code to print out all
// the unique vector elements , that is all the elememnts that
// are not the same or clones
#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>

using namespace std;

int main()
{
    vector<int> numbers;
    numbers.push_back(1);
    numbers.push_back(2);
    numbers.push_back(2);
    numbers.push_back(3);
    numbers.push_back(4);
    numbers.push_back(4);
    numbers.push_back(5);

    unordered_set<int> uniqueElements;

    for (int i = 0; i < numbers.size(); i++)
    {
        uniqueElements.insert(numbers[i]);
    }

    for (int n : uniqueElements)
    {
        cout << n << " ";
    }
    cout << endl;

    return 0;
}
