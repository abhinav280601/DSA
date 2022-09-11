#include <bits/stdc++.h>

using namespace std;

vector<int> nextGreaterElement(vector<int> &nums1, vector<int> &nums2)
{
    stack<int> st;
    unordered_map<int, int> mp;
    int n = nums2.size();
    mp[nums2[n - 1]] = -1;
    st.push(nums2[n - 1]);
    for (int i = n - 2; i >= 0; i--)
    {
        while (!st.empty() && st.top() <= nums2[i])
        {
            st.pop();
        }
        int res = st.empty() ? -1 : st.top();
        mp[nums2[i]] = res;
        st.push(nums2[i]);
    }
    vector<int> ans;
    for (int i = 0; i < nums1.size(); i++)
    {
        ans.push_back(mp.at(nums1[i]));
    }
    return ans;
}
int main()
{

    return 0;
}