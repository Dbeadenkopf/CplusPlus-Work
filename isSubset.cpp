// Given two arrays determine wether an array2 is a subset of array 1
#include <vector>

using namespace std;

bool isSubset(vector<int> &arr1, vector<int> &arr2, int m, int n)
{
    for (int i = 0; i < n; i++)
    {
        bool found = false;
        for (int j = 0; j < m; j++)
        {
            if (arr2[i] == arr1[j])
            {
                found = true;
                break;
            }
        }
        if (!found)
            return false;
    }
    return true;
}

int main()
{
    vector<int> arr1;
    arr1.push_back(11);
    arr1.push_back(1);
    arr1.push_back(13);
    arr1.push_back(21);
    arr1.push_back(3);
    arr1.push_back(7);
    vector<int> arr2;
    arr2.push_back(11);
    arr2.push_back(3);
    arr2.push_back(7);
    arr2.push_back(1);
    int m = arr1.size();
    int n = arr2.size();

    if (isSubset(arr1, arr2, m, n))
    {
        cout << "Is a subset" << endl;
    }
    else
    {
        cout << "is not a subset" << endl;
    }

    return 0;
}
