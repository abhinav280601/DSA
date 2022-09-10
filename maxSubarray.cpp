#include <bits/stdc++.h>

using namespace std;
class Solution
{
public:
    int maxSubArray(vector<int> nums)
    {
        int currSum = 0;
        int maxSum = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            currSum += nums[i];
            if (currSum > maxSum)
            {
                maxSum = currSum;
            }
            if (currSum < 0)
            {
                currSum = 0;
            }
        }
        return maxSum;
    }
};
int main()
{

    return 0;
}