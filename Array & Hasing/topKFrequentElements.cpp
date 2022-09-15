#include <bits/stdc++.h>

using namespace std;
vector<int> topKFrequent(vector<int> &nums, int k)
{
    unordered_map<int, int> m;
    for (int i = 0; i < nums.size(); i++)
    {
        m[nums[i]]++;
    }
    vector<int> ans;
    for (int i = 0; i < k; i++)
    {
        pair<int, int> p(0, 0);
        for (auto &x : m)
        {
            if (p.second < x.second)
            {
                p.second = x.second;
                p.first = x.first;
            }
        }
        ans.push_back(p.first);
        m.erase(p.first);
    }

    return ans;
}
int main()
{

    return 0;
}