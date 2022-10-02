#include <bits/stdc++.h>

using namespace std;
class Solution
{
public:
    int maxProduct(vector<int> &nums)
    {
        int n = nums.size(), res = nums[0], pFront = 1, pBack = 1;
        for (int i = 0; i < n; i++)
        {
            pFront = (pFront)*nums[i];
            pBack = (pBack)*nums[n - 1 - i];
            cout << pFront << " " << pBack << endl;
            res = max(res, max(pFront, pBack));
            if (pFront == 0)
                pFront = 1;
            if (pBack == 0)
                pBack = 1;
        }
        return res;
    }
};
int main()
{

    return 0;
}