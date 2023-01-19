#include<bits/stdc++.h>
using namespace std;
int largestRectangleArea(vector<int> &histo)
    {
        stack<int> st;
        int maxA = INT_MIN;
        int n = histo.size();
        st.push(n-1);
        vector<int>rnse(n,0);
        for(int i=n-1; i>=0; i--){
            while(!st.empty() && histo[st.top()]>=histo[i]){
                st.pop();
            }
            if(st.empty())
            rnse[i]=n-1;
            else 
            rnse[i]=st.top()-1;
            st.push(i);
            }
        stack<int> stt;
        stt.push(0);
        vector<int>lnse(n,0);
        for(int i=0; i<n; i++){
            while(!stt.empty() && histo[stt.top()]>=histo[i]){
                stt.pop();
            }
            int res;
            if(stt.empty())
            lnse[i]=0;
            else 
            lnse[i]=stt.top()+1;
            stt.push(i);
        }
        for(int i=0; i<n; i++){
        cout<<lnse[i]<<" "<<rnse[i]<<endl;
        maxA=max((rnse[i]-lnse[i]+1)*histo[i],maxA);
        }
        return maxA;
    }
int main()
{
    return 0;
}