#include <bits/stdc++.h>

using namespace std;
class Solution
{
public:
    int trap(vector<int> &h)
    {
        int ans = 0;
        int n = h.size();
        int jm = 0;
        int im = 0;
        vector<int> imax;
        vector<int> jmax;
        for (int i = 0; i < n; i++)
        {
            if (im < h[i])
            {
                im = h[i];
            }
            imax.push_back(im);
        }
        for (int i = n - 1; i >= 0; i--)
        {
            if (jm < h[i])
            {
                jm = h[i];
            }
            jmax.push_back(jm);
        }
        for (int i = 0; i < n; i++)
        {
            ans += min(imax[i], jmax[n - 1 - i]) - h[i];
        }
        return ans;
    }
};
int main()
{

    return 0;
}