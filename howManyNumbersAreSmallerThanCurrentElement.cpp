#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    vector<int> smallerNumbersThanCurrent(vector<int> &nums)
    {
        vector<int> v(101, 0);
        vector<int> ans(nums.size(), 0);
        for (int i = 0; i < nums.size(); i++)
        {
            v[nums[i]]++;
        }
        for (int i = 1; i < v.size(); i++)
        {
            v[i] += v[i - 1];
        }
        for (int i = 0; i < ans.size(); i++)
        {
            if (nums[i] == 0)
            {
                ans[i] = 0;
            }
            else
                ans[i] = v[nums[i] - 1];
        }
        return ans;
    }
};
int main()
{

    return 0;
}