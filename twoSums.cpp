// this file will contain the code for two sums. Given an
// array of integers, find the indexes of the numbers that will
// add up to the given target
#include <iostream>
#include <vector>

using namespace std;

class TwoSums
{

public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        int n = nums.size();
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (nums[i] + nums[j] == target)
                {
                    indexes.push_back(i);
                    indexes.push_back(j);
                }
            }
        }
        return indexes;
    }

private:
    vector<int> indexes;
};

int main()
{
    TwoSums solution;
    int target = 9;
    vector<int> numbers;
    numbers.push_back(2);
    numbers.push_back(7);
    numbers.push_back(11);
    numbers.push_back(15);
    vector<int> result = solution.twoSum(numbers, target);

    cout << "Output: [" << result[0] << ", " << result[1] << "]" << endl;

    return 0;
}