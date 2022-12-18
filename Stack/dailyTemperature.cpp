#include<bits/stdc++.h>
using namespace std;
 vector<int> dailyTemperatures(vector<int>& temperatures) {
    stack<pair<int,int>>st;
    int n= temperatures.size();
    vector<int>ans(n,0);
    st.push({temperatures[n-1],n-1});
    for(int i=n-2; i>=0; i--){
        int count=0;
        if(st.top().first>temperatures[i])
        count++;
        while(!st.empty() && st.top().first<=temperatures[i]){
            st.pop();
        }
        int res=st.empty()?0:st.top().second;
        if(res==0)
        ans[i]=0;
        else
        ans[i]=res-i;
        st.push({temperatures[i],i});
    }
    return ans;
    }
int main()
{
    return 0;
}