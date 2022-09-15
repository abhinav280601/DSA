#include <bits/stdc++.h>

using namespace std;
class Solution
{
public:
    int maxArea(vector<int> &height)
    {
        int ans = 0;
        int result = 0;
        //         Solution in O(n^2)
        // for(int i=0;i<height.size(); i++){
        //     for(int j=0; j<height.size();j++){
        //         int t=min(height[i],height[j]);
        //         ans=t*abs(j-i);
        //         result=max(result,ans);
        //     }
        // }
        int i = 0;
        int j = height.size() - 1;
        while (i < j)
        {
            int t = min(height[i], height[j]);
            ans = t * abs(j - i);
            result = max(result, ans);
            if (height[j] > height[i])
                i++;
            else
                j--;
        }
        return result;
    }
};
int main()
{

    return 0;
}