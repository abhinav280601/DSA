#include <bits/stdc++.h>
class Solution
{
public:
    int largestRectangleArea(vector<int> &h)
    {
        int n = h.size();
        vector<int> leftSmaller;
        vector<int> rightSmaller(n, 0);
        stack<int> st1;
        stack<int> st2;
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            while (!st1.empty() && h[st1.top()] >= h[i])
            {
                st1.pop();
            }
            int res = st1.empty() ? 0 : st1.top() + 1;
            leftSmaller.push_back(res);
            st1.push(i);
        }
        for (int i = n - 1; i >= 0; i--)
        {
            while (!st2.empty() && h[st2.top()] >= h[i])
            {
                st2.pop();
            }
            int res = st2.empty() ? n - 1 : st2.top() - 1;
            rightSmaller[i] = res;
            st2.push(i);
        }
        //  for(int i=0; i<n;i++){
        //      cout<<leftSmaller[i]<<" "<<rightSmaller[i]<<endl;
        //  }
        for (int i = 0; i < n; i++)
        {
            ans = max(ans, (rightSmaller[i] - leftSmaller[i] + 1) * h[i]);
        }
        return ans;
    }
};
using namespace std;

int main()
{

    return 0;
}