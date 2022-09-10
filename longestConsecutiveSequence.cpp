#include <bits/stdc++.h>

using namespace std;

int longestConsecutive(vector<int> &nums)
{
    set<int> m;
    int n = nums.size();
    int count = 0;
    if (nums.empty())
    {
        return count;
    }
    for (int i = 0; i < n; i++)
    {
        m.insert(nums[i]);
    }
    vector<int> ans;
    vector<int> v;
    for (auto x : m)
    {
        ans.push_back(x);
    }

    ans.push_back(INT_MIN); // Necessary to add dummy element

    for (int i = 0; i < ans.size() - 1; i++)
    {
        if (ans[i + 1] == ans[i] + 1)
        {
            count++;
        }
        else
        {
            v.push_back(count);
            count = 0;
        }
    }
    int maxi = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (maxi < v[i])
        {
            maxi = v[i];
        }
    }

    return maxi + 1;
}
int main()
{

    return 0;
}