#include<iostream>
#include<vector>

using namespace std;
class Solution
{
public:
    vector<int> runningSum(vector<int> &nums)
    {
        int n = nums.size();
        int value = 0;
        for (int i = 0; i < n; i++)
        {
            value += nums[i];
            nums[i] = value;
        }
        return nums;
    }
};

int main()
{
    vector<int> nums = {1, 2, 3, 10};

    Solution mysolution;
    vector<int> result = mysolution.runningSum(nums);

    for (int value : result)
    {
        cout << value << " ";
    }
    cout << endl;

    return 0;

}