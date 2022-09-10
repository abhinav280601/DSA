#include <bits/stdc++.h>

using namespace std;
class Solution
{
public:
    vector<vector<int>> threeSum(vector<int> &v)
    {

        int n = v.size();
        vector<vector<int>> ans;
        sort(v.begin(), v.end());
        for (int i = 0; i < n; i++)
        {
            int sum = 0;
            int k = i + 1;
            int l = n - 1;
            while (k < l)
            {
                sum = v[i] + v[k] + v[l];
                if (sum == 0)
                {
                    ans.push_back({v[i], v[k], v[l]});
                    int x = v[k];
                    int y = v[l];
                    while (k < l && v[k] == x)
                    {
                        k++;
                    }
                    while (k < l && v[l] == y)
                    {
                        l--;
                    }
                }
                else if (sum < 0)
                {
                    k++;
                }
                else
                    l--;
            }
            while (i + 1 < v.size() && v[i] == v[i + 1])
            {
                i++;
            }
        }
        return ans;
    }
};
int main()
{

    return 0;
}